#include "arc.h"
#include "liste_arc.h"

#ifndef _SOMMET_H_H
#define _SOMMET_H_H


typedef struct {			// on définit un sommet par son
    int id;				// id et sa position
    double x,y;				// il possède en plus une liste d arc
    L_ARC voisins;
    char * nom; 			//  un nom
    char * line; 			// et une ligne
} T_SOMMET;


// Fonction affiche d'un sommet
// PARAMETRES
//	s : IN. un sommet qui va etre afficher
// RETURN
void afficher_s(T_SOMMET s);

#endif

