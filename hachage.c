#include "hachage.h"
#include <stdio.h>
#include <string.h>

int code(char * mot, int N) {
    int i;
    int l = strlen(mot);
    int res = 0;
    int a = 31;

    for( i=0 ; i<l ; i++) {
        res += (res*a + (unsigned char)mot[i] ) ;
    }

    return res%N;
}


void affiche_hac(L_INT* table, int l) {
    int i;
    L_INT p;
    for(i = 0; i<l; i++) {
	visualiser_i(table[i]);
	

    }
}



