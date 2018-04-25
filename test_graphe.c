#include <stdio.h>
#include <stdlib.h>
#include "liste_arc.h"
#include "graphe.h"



main(){	int * n;
	T_SOMMET * graphe = load_graphe("graphe1.txt",&n);

	afficher_graphe(graphe,n);
}
