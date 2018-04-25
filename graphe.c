#include "graphe.h"
#include "types.h"
#include "liste_arc"
#include <stdlib.h>
#include <stdio.h>

//
T_SOMMET * creer_graphe(char* fic, int* ptaille){
	FILE* pf = fopen(nomfic, 'r');
	int numero; 
	double lat,longi; 
	char line[128]; 
	char mot[512];
	int i,dep,ar,val;
	T_ARC arc;

	if (!pf){
		puts("erreur de lecture fichier");
		return NULL;
	}
	fscanf(pf, "%d", ptaille);
	
	T_SOMMET * graphe[*ptaille];	
	
	fgets(mot,511,f); // on passe la ligne Sommets du graphe
	
	for(i = 0; i<*ptaille;i++){  // on récupère les sommets
		fscanf(f,"%d %lf %lf %s", &(numero), &(lat), &(longi), line); //attention pb de lecture ?
		
		fgets(mot,511,f); 
			if (mot[strlen(mot)-1]<32) mot[strlen(mot)-1]=0;
		strcpy(*(graphe+i)->nom,mot);
		*(graphe + i)-> x = lat;
		*(graphe + i)-> y = longi;
	}
	
	fgets(mot,511,f);  // on passe la ligne Arêtes du graphe : noeud1 noeud2 valeur
	
	while(fscanf(f,"%d %d %lf",&dep, &arr, &val)!=EOF){ //tant qu'on est pas à la fin du fichier
		arc.arrivee = arr;
		arc.cout = val;
		ajout_queue_a(arc, (graphe + dep)->voisin);
	}


	fclose(pf);
	return graphe;	
}

void visualiser_graphe(T_SOMMET graphe, int taille){
	int i;
	for(i=0;i<n;i++){
		printf("Nom : %s",graphe[i].nom);
		printf("Lat : %lf // Long : %lf", x,y);
		visualiser_a(graphe[i].voisins);
		puts("");
	}


}


