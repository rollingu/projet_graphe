#include <stdio.h>
#include <stdlib.h>
#include "liste_arc.h"


Liste creer_liste_a() {
    return NULL;
}

int liste_vide_a(l) {
    return !l;
}


Liste ajout_tete(T_ARC a, L_ARC l) {
    T_ARC p = calloc(1,sizeof(*p));
    if (p==NULL)
        return creer_liste_a();

    p->val = a;
    p->suiv = l;
    return p;
}


Liste ajout_queue_a(T_ARC a, L_ARC l) {
    if (liste_vide_a(l)) {
	return ajout_tete_a(a,l);
    }

    L_ARC p=l;
    while (p->suiv != NULL) {
        p = p ->suiv;
    }

    L_ARC new = calloc(1,sizeof(*new));
    if (new == NULL) {
        return l;
    }
    p->suiv = new;
    new->val = a;
    new->suiv = NULL;

    return l;
}

