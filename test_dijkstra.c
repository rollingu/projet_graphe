#include <stdio.h>
#include <stdlib.h>
#include "liste_arc.h"
#include "graphe.h"
#include "dijkstra.h"
#include "hachage.h"


main(){
	
	int n,err; T_SOMMET * graphe = NULL;
	 int i; int depart=0; int arrivee = 5;
	L_INT* table_h = NULL;
	
	err = load_graphe("grapheNewYork.csv",&graphe,&n,&table_h);
	printf("Graph load");
	double peres[n]; L_INT adj;
	
	//visualiserg_graphe(graphe,n);
	
	
	printf("\n graphload\n");
	printf("Depart ?\n");
	scanf("%d",&depart);
	printf("Arrivee ?\n");
	scanf("%d", &arrivee);
	printf("ok\n");

	algo(graphe,n,depart,arrivee,peres);
	printf("Algo Dijkstra fait.\n");
	int temp = arrivee;
	
	L_INT chemin = creer_liste_i();
	chemin = ajout_tete_i(arrivee,chemin);
	
	while (temp != depart && peres[temp] != -1){
		chemin = ajout_tete_i(peres[temp],chemin);
		temp = peres[temp];		
	}
	
	L_INT tmp = chemin;
	if (tmp->val != depart){
		printf("Pas de chemin possible\n");
		goto fin;
	}
	tmp = tmp ->suiv;
	while (tmp != NULL){
		if (tmp->val == -1){
			printf("Pas de cehmin possible\n");
			goto fin;
		}
		tmp = tmp->suiv;
		
	}
	printf("Chemin a prendre :\n");
	visualiser_i(chemin);
	fin:
	printf("Terminer.\n");

}
