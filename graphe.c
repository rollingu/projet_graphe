#include "graphe.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//
int load_graphe(char* nomfic,T_SOMMET** pgraphe, int* pnbsommet) {
    FILE* pf ;
    int num;
    char line[128];
    char mot[512]; // on pourrait utiliser une seule de ces deux variables mais on choisit
    char nom[512]; // d'utiliser les deux pour la clarete du code
    int i,nbarc;
    T_ARC arc;
    T_SOMMET s;

    if ( (pf = fopen(nomfic, "rt")) == NULL ) {
        puts("erreur ouverture fichier");
        return 1;
    }
    fscanf(pf, "%d %d", pnbsommet, &nbarc);

    *pgraphe = calloc (*pnbsommet, sizeof(T_SOMMET));//allocation memoire pour graphe

    if (*pgraphe == NULL) {

        puts("erreur alloc graphe");
        return 2;
    }

    fgets(mot,511,pf); // on passe la ligne Sommets du graphe

    for(i = 0; i<=*pnbsommet; i++) { // on récupère les sommets
        fscanf(pf,"%d %lf %lf %s", &(s.id), &(s.x), &(s.y), line); //attention pb de lecture ?
        (*pgraphe)[s.id] = s;
        printf("%s %s\n", line, mot);
        fgets(mot,511,pf);
        printf("%s \n", mot);

        //strcpy( graphe[i].nom,mot);
    }



    fgets(mot,511,pf);  // on passe la ligne Arêtes du graphe : noeud1 noeud2 valeur

    while(fscanf(pf,"%d %d %lf",&num, &(arc.arrivee), &(arc.cout))!=EOF ) { // on lit tant qu'on atteint pas la fin du fichier securite vis à vis du nb arc qui pourrait etre faux
        (*pgraphe)[num].voisins = ajout_tete_a(arc,(*pgraphe)[num].voisins);

    }

    fclose(pf);
    return 0;
}

void visualiser_graphe(T_SOMMET** pgraphe, int taille) {
    int i;
    for(i=0; i<taille; i++) {
        printf("id : %d ",((*pgraphe)[i]).id);
        printf(" Lat : %lf // Long : %lf \n", ((*pgraphe)[i]).x,((*pgraphe)[i]).y);
        visualiser_la(((*pgraphe)[i]).voisins);
        puts("\n \n");
    }


}


