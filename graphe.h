#include <stdio.h>
#include "arc.h"
#include "sommet.h"




// Fonction de chargemetn du graphe
// PARAMETRES
//   fichier: IN. ptr sur le fichier du graphe
//   ptaille: OUT. *ptaille sera affect du nb de sommets trouvé dans le fichier
//   pgraphe*: OUT.
// RETURN
//    
//    0 si OK. UN nb != 0 si errerur lecture
//		1 : erreur de lecture fichier
int load_graphe( char * nomFIchier, T_SOMMET** pgraphe, int* ptaille );


void visualiser_graphe(T_SOMMET graphe, int taille);
