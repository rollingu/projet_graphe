#include "graphe.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//
T_SOMMET* load_graphe(char* nomfic,T_SOMMET* graphe, int* pnbsommet){
	FILE* pf ;
	int num; 
	double lat,longi; 
	char line[128]; 
	char mot[512];
	int i,dep,arr,val,nbarc;
	T_ARC arc;
	T_SOMMET s;

	if ( (pf = fopen(nomfic, "rt")) == NULL ){
		puts("erreur de lecture fichier");
		return NULL;
	}
	fscanf(pf, "%d %d", pnbsommet, &nbarc);

	graphe = (T_SOMMET*)calloc (*pnbsommet, sizeof(T_SOMMET));//allocation memoire pour graphe

	if (graphe = NULL){

		puts("erreur alloc graphe");
		return NULL;
		}
	
	fgets(mot,511,pf); // on passe la ligne Sommets du graphe
	
	for(i = 0; i<*pnbsommet;i++){  // on récupère les sommets
		fscanf(pf,"%d %lf %lf %s", &(s.id), &(s.x), &(s.y), line); //attention pb de lecture ?
		graphe[s.id] = s;
		fgets(mot,511,pf); 
		//	if (mot[strlen(mot)-1]<32) mot[strlen(mot)-1]=0;
		//strcpy( graphe[i].nom,mot);
		//(graphe[i]).x = lat;
		//(graphe[i]).y = longi;
	}
	
	fgets(mot,511,pf);  // on passe la ligne Arêtes du graphe : noeud1 noeud2 valeur
	
	while(fscanf(pf,"%d %d %lf",&num, &(arc.arrivee), &(arc.cout))!=EOF){ //tant qu'on est pas à la fin du fichier
		graphe[dep].voisins = ajout_tete_a(arc,graphe[dep].voisins);

		/*
		arc.arrivee = arr;
		arc.cout = val;
		ajout_queue_a(arc, (graphe[dep]).voisins);*/
	}


	fclose(pf);
	return graphe;	
}

void visualiser_graphe(T_SOMMET** pgraphe, int taille){
	int i;
	for(i=0;i<taille;i++){
		printf("id : %d",((*pgraphe)[i]).id);
		printf("Lat : %lf // Long : %lf", ((*pgraphe)[i]).x,((*pgraphe)[i]).y);
		visualiser_la(((*pgraphe)[i]).voisins);
		puts("");
	}


}


