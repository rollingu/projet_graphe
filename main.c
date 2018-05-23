#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "graphe.h"
#include "dijkstra.h"


main(){ char nomfic[128]; 
	char nom_depart[256];
	char nom_arrive[256];
	int err,n,code_d,code_a,taille_h; 
	T_SOMMET * graphe = NULL;
	L_INT* table_h = NULL;
	int visu;
	//visu = 1;
	visu = 1;
	//puts("Entrez 0 pour ne pas visualiser le graphe, 1 sinon :");
	//scanf("%d", &visu); 

/// ->> ça fait tout bugger...



	puts("Entrez le nom du fichier graphe :");
	gets(nomfic);
	err = load_graphe(nomfic,&graphe,&n,&table_h);

	taille_h = 500*n;


	printf("TAILLE  %d HHHHH\n", taille_h);


	puts("Entrez le nom du sommet de depart :");
	gets(nom_depart);

	puts("Entrez le nom du sommet d'arrivee :");
	gets(nom_arrive);

	code_d = code(nom_depart,500*n);
	code_a = code(nom_arrive,500*n);

	printf("%d     %d \n",code_d,code_a);

	printf("|%s|	|%s| \n",nom_depart,nom_arrive);

	visualiser_i(table_h[code_d]);
	

    	printf("Le code d'erreur du chargement du graphe est : %d err\n", err);
	

	if(visu){
	visualiser_graphe(graphe,n);
	}



}
