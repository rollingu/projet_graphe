#ifndef _L_INT_H_H
#define _L_INT_H_H

#include <stdio.h>

struct maillon {
    int val;
    struct maillon * suiv;
    };

typedef struct maillon Maillon;
typedef Maillon * L_INT;

L_INT creer_liste_i();
int liste_vide(L_INT l);
void visualiser(L_INT l);
L_INT ajout_tete(int a, L_INT l);
L_INT supprimer_tete(L_INT l);
void liberer(L_INT l);
L_INT ajout_queue_i(int a, L_INT l);
L_INT supprimen(int n, L_INT l);

#endif

