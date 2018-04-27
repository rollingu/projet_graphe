#include "arc.h"
#include "liste_arc.h"

#ifndef _SOMMET_H_H
#define _SOMMET_H_H


typedef struct {			// on définit un sommet par son
    char* nom;				// nom et sa position
    double x,y;				// il possède en plus une liste
    L_ARC voisins;
} T_SOMMET;				// d'arc.


void afficher_s(T_SOMMET s);

#endif
