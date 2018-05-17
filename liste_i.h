#ifndef _L_INT_H_H
#define _L_INT_H_H

#include <stdio.h>

struct maillon_i {
    int val;
    struct maillon_i * suiv;
    };

typedef struct maillon_i Maillon_i;
typedef Maillon_i * L_INT;

L_INT creer_liste_i();
int liste_vide_i(L_INT l);
void visualiser_i(L_INT l);
L_INT ajout_tete_i(int a, L_INT l);
L_INT supprimer_tete_i(L_INT l);
void liberer_i(L_INT l);
L_INT ajout_queue_i(int a, L_INT l);
L_INT supprime_element_i(int n, L_INT l);

#endif

