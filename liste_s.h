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

L_SOMMET creer_liste_s();
int liste_vide(L_SOMMET l);
void visualiser(L_SOMMET l);
L_SOMMET ajout_tete(T_SOMMET a, L_SOMMET l);
L_SOMMET supprimer_tete(L_SOMMET l);
void liberer(L_SOMMET l);
L_SOMMET ajout_queue_s(int a, L_SOMMET l);
L_SOMMET supprimer_element_s(T_SOMMET n, L_SOMMET l);

#endif
