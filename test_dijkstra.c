#include <stdio.h>
#include <stdlib.h>
#include "liste_arc.h"
#include "graphe.h"
#include "dijkstra.h"


main(){
	
	int n; T_SOMMET * graphe = NULL;
	


	graphe = load_graphe("graphe1.txt",graphe,&n);
	double * peres=calloc(n, sizeof(double));
	
	peres = algo(graphe,n,0,5);
	int i;
	for (i=0;i<8;i++){
		printf("%lf",peres[i]); 

}
