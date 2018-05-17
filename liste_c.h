#ifndef _LC_H_H
#define _LC_H_H


#include <stdio.h>
#include <string.h>

struct cellule {
    char* val;
    struct cellule * suiv;
} ;

typedef struct cellule * Liste;


Liste creer_liste_c(void);
int est_vide_c(Liste L);
Liste rech_c(char* s, Liste L);
Liste ajout_tete_c(char* s, Liste L);

#endif
