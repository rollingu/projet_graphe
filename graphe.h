#include <stdio.h>


typedef struct {     			// on définit un arc par son cout
    int arrivee;			// et le numéro où il arrive.
    double cout;
} T_ARC;

typedef struct lsucc {			// lsucc est une "liste" d'arc
    T_ARC val;
    struct lsucc* suiv;
}* L_ARC;

typedef struct {			// on définit un sommet par son
    char* nom;				// nom et sa position
    double x,y;				// il possède en plus une liste
    L_ARC voisins;
} T_SOMMET;				// d'arc.



T_SOMMET* creer_graphe( FILE* fichier, int* ptaille );
void ajout_sommet(T_SOMMET * graphe, T_SOMMET sommet);
 

