#ifndef _LISTE_ARC_H_H
#define _LISTE_ARC_H_H


#include <stdio.h>
#include "arc.h"

typedef struct lsucc {			// lsucc est une "liste" d'arc
    T_ARC val;
    struct lsucc* suiv;
}* L_ARC ;



L_ARC creer_liste_a(void);
int liste_vide_a(L_ARC l);
void visualiser_la(L_ARC l);
L_ARC ajout_tete_a(T_ARC a, L_ARC l);
//Liste supprimer_tete_a(L_ARC l);
//void liberer_a(L_ARC l);
L_ARC ajout_queue_a(T_ARC a, L_ARC l);
//Liste copie_a(L_ARC);

#endif
