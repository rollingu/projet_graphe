#include <stdio.h>
#include <stdlib.h>
#include "liste_arc.h"
#include "graphe.h"



main() {
    int n,err;
    T_SOMMET * graphe = NULL;
	//printf("%d %d", code("Sommet215198",2643460),code("Sommet183720",2643460));

//    err = load_graphe("grapheNewYork.csv",&graphe,&n);
    err = load_graphe("metroetu.csv",&graphe,&n);
//	err = load_graphe("graphe1.txt",&graphe,&n);
    printf("%d err\n", err);

	getchar();

    visualiser_graphe(graphe,n);
}
