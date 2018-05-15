#include <stdio.h>
#include <stdlib.h>
#include "sommet.h"

void affiche_s(T_SOMMET s) {

    printf("%d\n",s.id);
    printf("x: %lf  y: %lf   ", s.x,s.y);
    visualiser_la(s.voisins);
    puts("");

}
