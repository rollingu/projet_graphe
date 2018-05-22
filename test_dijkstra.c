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
	//visualiser_graphe(graphe,n);
	
	
	printf("\n graphload\n");
	printf("Depart ?\n");
	scanf("%d",&depart);
	printf("Arrivee ?\n");
	scanf("%d", &arrivee);
	printf("ok\n");
	
	//int pcc[5];
	//int tas[5];
	//for (i=0; i<5;i++){
	//	pcc[i] = i;
	//	tas[i] = i;
	//}
	//printf("tas creer\n");
	//for (i=0; i<5;i++){
	//	augmentetas(pcc,tas,i);
	///}
	//printf("Tas :\n");
	//for (i=0; i<5;i++){
	//	printf("%d",tas[i]);
	//}
	//printf("\npcc :\n");
	//for (i=0; i<5;i++){
	//	printf("%d",pcc[i]);
	//}

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
