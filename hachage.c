#include "liste_c.h"
#include <stdio.h>

int code(char * mot, int N) {
    int i;
    int l = strlen(mot);
    int res = 0;
    int a = 31;

    for( i=l-1 ; i>-1 ; i--) {
        res += (res*a + (unsigned char)mot[i] )%N ;
    }

    return res%l;
}


void affiche_hac(Liste * table, int l) {
    int i;
    Liste p;
    for(i = 0; i<l; i++) {

        if(est_vide(table[i])) {
            printf("liste vide\n");
            return;
        }
        for(p=table[i]; p!=NULL; p = p->suiv)
            printf("%s", p->val);
        puts("\n");

    }

}


Liste* construit_hac(char * nom_fic, Liste * table ,int l) {
    char mot[256];
    FILE* pf = fopen(nom_fic,"r");
    if(pf==NULL) {
        puts("erreur lecture");
        return;
    }

    int c;
    int err = 1;
    while(err) {
        err = lectureLigneDico(mot, 255, pf);
        if(err) {
            c = code(mot,l);
            table[c]=ajout_tete(mot, table[c]);
        }
    }
    fclose(pf);
    return table;
}


