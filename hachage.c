#include "hachage.h"
#include <stdio.h>
#include <string.h>

int code(char * mot, int l) {
    int i;
    int N = strlen(mot);
    int res = 0;
    int a = 31;

	if (N==0){// mot taille nulle
		return -1;
	}
	res = mot[N-1]; // test direct for ?
    for( i=N-2 ; i>-1 ; i--) {
        res += (res*a + mot[i] ) %l ;
    }

    return abs(res%l);
}


void affiche_hac(L_INT* table, int l) {
    int i;
    L_INT p;
    for(i = 0; i<l; i++) {
		visualiser_i(table[i]);
	//if(table[i]){	
	//if (table[i]->val == 17 || table[i]->val == 121 ||table[i]->val == 221){ // 17/121/221 => Bastille 
	//	getchar();
//	}	}

    }
}



