#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "graphe.h"
#include "dijkstra.h"


main(){ char* nomfic; 
	char nom_depart[256];
	char nom_arrive[256];
	int err,n,code_d,code_a; 
	T_SOMMET * graphe = NULL;
	L_INT* table_h = NULL;
	int visu;
	//visu = 1;
	visu = 0;
	//puts("Entrez 0 pour ne pas visualiser le graphe, 1 sinon :");
	//scanf("%d", &visu); 

/// ->> ça fait tout bugger...



	puts("Entrez le nom du fichier graphe :");
	scanf("%s",nomfic);
	
	err = load_graphe(nomfic,&graphe,&n,&table_h);

	
	puts("Entrez le nom du sommet de depart :");
	scanf("%s",nom_depart);

	puts("Entrez le nom du sommet d'arrivee :");
	scanf("%s",nom_arrive);

	code_d = code(nom_depart,n*n);
	code_a = code(nom_arrive,n*n);

	printf("%d     %d \n",code_d,code_a);

	if(table_h[code_d]->suiv != NULL ){
	puts("Plusieurs sommet pour le depart");

	}

    	printf("Le code d'erreur du chargement du graphe est : %d err\n", err);
	

	if(visu){
	visualiser_graphe(graphe,n);
	}



}
