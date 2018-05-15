#include <stdio.h>
#include "liste_i.h"
#include <stdlib.h>

L_INT creer_liste_i(void) {
    return NULL;
}

int liste_vide(L_INT l) {
    return !l;
}

void visualiser(L_INT l) {
    if (liste_vide(l)) printf("Liste Vide");
    else {
        L_INT p=l;
        while (!liste_vide(p)) {
            //affiche(&p->val);
            p=p->suiv;
        }
    }
}

L_INT supprimer_tete_i(L_INT l) {
    if (!liste_vide(l)) {
        L_INT p;
        p=l->suiv;
        free(l);
        return p;
    }
    return l;
}

void liberer(L_INT l) {
    while (!liste_vide(l)) {
        l=supprimer_tete_i(l);
    }
}

L_INT ajout_tete_i(int cart, L_INT l) {
    Maillon_i *pm = calloc(1,sizeof(*pm));
    if (pm==NULL) return creer_liste_i();
    pm->val=cart;
    pm->suiv=l;
    return pm;
}

L_INT ajout_queue_i(int cart, L_INT l) {
    if (liste_vide(l)) {
        return ajout_tete_i(cart,l);
    }
    L_INT p=l;
    while (!liste_vide(p->suiv)) {
        p=p->suiv;
    }

    Maillon_i *pm=calloc(1,sizeof(*pm));
    if (pm==NULL) return creer_liste_i();

    p->suiv=pm;
    pm->val=cart;
    pm->suiv=NULL;
    return l;
}




L_INT supprime_element_i(int n, L_INT l) {
    if (liste_vide(l)) return creer_liste_i();
    L_INT p1 = l;
    if (p1->val == n) {
        return supprimer_tete_i(l);
    }
    L_INT p2 = l->suiv;

    while (!p2) {
        if (p2->val == n ) {
            Maillon_i * temp = p2->suiv;
            free(p2->suiv);
            p1->suiv =temp ;
        }
        p1=p2;
        p2 = p2->suiv;
    }

    return l;


}

