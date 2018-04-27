#include <stdio.h>
#include <stdlib.h>
#include "sommet.h"

void affiche_s(T_SOMMET s){

	printf("%s\n",s.nom);
	printf("x: %lf  y: %lf   ", s.x,s.y);
	visualiser_la(s.voisins);
	puts("");

}
