#include <stdio.h>
#include <stdlib.h>
#include "sommet.h"

void affiche_s(T_SOMMET s){

        printf("id : %d ",s.id);
        printf(" Lat : %lf // Long : %lf \n", s.x,s.y);
	printf("Nom : %s || Ligne : %s \n", s.nom,s.line);
        visualiser_la(s.voisins);
	puts("");


	

}
