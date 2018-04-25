#include <stdio.h>
#include <stdlib.h>
#include "liste_arc.h"
#include "graphe.h"
#include "types.h"



main(){	int * n;
	T_SOMMET * graphe = creer_graphe("graphe1.txt",&n);

	afficher_graphe(graphe,n);
}
