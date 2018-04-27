#include "graphe.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//
T_SOMMET* load_graphe(char* nomfic,T_SOMMET* graphe, int* ptaille){
	FILE* pf = fopen(nomfic, "r");
	int numero; 
	double lat,longi; 
	char line[128]; 
	char mot[512];
	int i,dep,arr,val;
	T_ARC arc;
	T_SOMMET s;

	if (!pf){
		puts("erreur de lecture fichier");
		return NULL;
	}
	fscanf(pf, "%d", ptaille);

	graphe = calloc (*ptaille, sizeof(T_SOMMET));//allocation memoire pour graphe

	if (graphe = NULL){

		puts("erreur alloc graphe");
		return NULL;
		}
	
	fgets(mot,511,pf); // on passe la ligne Sommets du graphe
	
	for(i = 0; i<*ptaille;i++){  // on récupère les sommets
		fscanf(pf,"%d %lf %lf %s", &(numero), &(lat), &(longi), line); //attention pb de lecture ?
		fgets(mot,511,pf); 
		//	if (mot[strlen(mot)-1]<32) mot[strlen(mot)-1]=0;
		strcpy( graphe[i].nom,mot);
		(graphe[i]).x = lat;
		(graphe[i]).y = longi;
	}
	
	fgets(mot,511,pf);  // on passe la ligne Arêtes du graphe : noeud1 noeud2 valeur
	
	while(fscanf(pf,"%d %d %lf",&dep, &arr, &val)!=EOF){ //tant qu'on est pas à la fin du fichier
		arc.arrivee = arr;
		arc.cout = val;
		ajout_queue_a(arc, (graphe[dep]).voisins);
	}


	fclose(pf);
	return graphe;	
}

void visualiser_graphe(T_SOMMET** pgraphe, int taille){
	int i;
	for(i=0;i<taille;i++){
		printf("Nom : %s",((*pgraphe)[i]).nom);
		printf("Lat : %lf // Long : %lf", ((*pgraphe)[i]).x,((*pgraphe)[i]).y);
		visualiser_la(((*pgraphe)[i]).voisins);
		puts("");
	}


}


