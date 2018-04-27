#ifndef _Ls_H_H
#define _Ls_H_H

#include <stdio.h>
#include "sommet.h"
struct maillon {
    T_SOMMET val;
    struct maillon * suiv;
    };

typedef struct maillon Maillon;
typedef Maillon * L_SOMMET;

L_SOMMET creer_liste();
int liste_vide(L_SOMMET l);
void visualiser(L_SOMMET l);
L_SOMMET ajout_tete(int a, L_SOMMET l);
L_SOMMET supprimer_tete(L_SOMMET l);
void liberer(L_SOMMET l);
L_SOMMET ajout_queue(int a, L_SOMMET l);
L_SOMMET supprimen(int n, L_SOMMET l);

#endif

