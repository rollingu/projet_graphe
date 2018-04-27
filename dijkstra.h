#include "graphe.h"
#include "liste_i.h"
#include "arc.h"
#include "sommet.h"


L_INT adjacents(T_SOMMET * graphe,int sommet);
bool est_dans_liste(int a, L_INT liste);
double calcul_cout(T_SOMMET * graphe,int a, int b);
void algo( T_SOMMET * graphe, int taille, int a, int b);


