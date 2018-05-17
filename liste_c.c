#include "liste_c.h"
#include <stdio.h>
#include <stdlib.h>

Liste creer_liste_c(void) {
    return NULL;
}

int est_vide_c(Liste L) {
    return !L;
}

Liste ajout_tete_c(char* s, Liste L)
{   Liste p=(Liste) calloc(1,sizeof(*p));
    if (p==NULL) return NULL;
    p->val=strdup(s);
    p->suiv=L;
    return p;
}

Liste rech_c(char* s, Liste L)
{   Liste p=L;
    while(!est_vide(p)&&(strcasecmp(p->val,s)!=0)) p=p->suiv;
    return p;
}


