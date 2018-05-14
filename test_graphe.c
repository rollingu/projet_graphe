#include <stdio.h>
#include <stdlib.h>
#include "liste_arc.h"
#include "graphe.h"



main(){	int n; T_SOMMET * graphe = NULL;


	graphe = load_graphe("graphe1.txt",graphe,&n);

	visualiser_graphe(&graphe,n);
}
