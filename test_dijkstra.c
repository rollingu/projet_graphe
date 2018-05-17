#include <stdio.h>
#include <stdlib.h>
#include "liste_arc.h"
#include "graphe.h"
#include "dijkstra.h"


main(){
	
	int n,err; T_SOMMET * graphe = NULL;
	 int i; int depart=0; int arrivee = 5;
	
	
	err = load_graphe("grapheNewYork.csv",&graphe,&n);
	printf("Graph load");
	double peres[n]; L_INT adj;
	visualiser_graphe(graphe,n);
	
	
	printf("\n graphload\n");
	printf("Depart ?\n");
	scanf("%d",&depart);
	printf("Arrivee ?\n");
	scanf("%d", &arrivee);
	printf("ok\n");
	

	algo(graphe,n,depart,arrivee,peres);
	printf("Algo Done\n");
	int temp = arrivee;
	
	L_INT chemin = creer_liste_i();
	chemin = ajout_tete_i(arrivee,chemin);
	while (temp != depart){
		chemin = ajout_tete_i(peres[temp],chemin);
		temp = peres[temp];		
		
	}
	printf("Chemin à prendre :\n");
	visualiser_i(chemin);

}
