#include <stdio.h>
#include <stdlib.h>
#include "liste_arc.h"
#include "graphe.h"



main() {
    int n,err;
    T_SOMMET * graphe = NULL;
	L_INT* table_h =NULL;
	//printf("%d %d", code("Sommet215198",2643460),code("Sommet183720",2643460));

//    err = load_graphe("grapheNewYork.csv",&graphe,&n,&table_h);
kkkkk    err = load_graphe("metroetu.csv",&graphe,&n,&table_h);
//	err = load_graphe("graphe1.txt",&graphe,&n,&table_h);
    printf("%d err\n", err);

	getchar();

    visualiser_graphe(graphe,n);
}
