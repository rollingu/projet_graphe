#include <stdio.h>
#include <stdlib.h>
#include "liste_arc.h"
#include "graphe.h"



main(){	int n,err; T_SOMMET * graphe = NULL;


	err = load_graphe("graphe1.txt",&graphe,&n);

	visualiser_graphe(&graphe,n);
}
