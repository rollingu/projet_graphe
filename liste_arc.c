#include <stdio.h>
#include <stdlib.h>
#include "liste_arc.h"
#include "arc.h"


L_ARC creer_liste_a() {
    return NULL;
}

int liste_vide_a(L_ARC l) {
    return !l;
}
	
void visualiser_la(L_ARC l) {
    L_ARC p=l;
    if(liste_vide_a(l)) {
 	printf("liste vide\n");
	return;
    }
    for(p=l; p!=NULL; p = p->suiv)
        affiche_a(p->val);
}



L_ARC ajout_tete_a(T_ARC a, L_ARC l) {
    L_ARC p = calloc(1,sizeof(*p));// peut-être plus
    if (p==NULL)
        return creer_liste_a();

    p->val = a;
    p->suiv = l;
    return p;
}


L_ARC ajout_queue_a(T_ARC a, L_ARC l) {
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


