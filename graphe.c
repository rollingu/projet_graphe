
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "graphe.h"


int load_graphe(char* nomfic,T_SOMMET** pgraphe, int* pnbsommet, L_INT** ptable_h) {
    FILE* pf ;
    char line[128];
    char mot[512]; // on pourrait utiliser une seule de ces deux variables mais on choisit
    char nom[512]; // d'utiliser les deux pour la clarete du code
    int i, nbarc, code_h,taille_h,num;
    T_ARC arc;
    T_SOMMET s;
	


    if ( (pf = fopen(nomfic, "rt")) == NULL ) {
        puts("erreur ouverture fichier");
        return 1;
    }
    fscanf(pf, "%d %d ", pnbsommet, &nbarc);

	taille_h = 500 * *pnbsommet;

	//printf("TAILLE  %d HHHHH\n", taille_h);

    *pgraphe = calloc (*pnbsommet, sizeof(T_SOMMET));//allocation memoire pour graphe
	

    if (*pgraphe == NULL) {

        puts("erreur alloc graphe");
        return 2;
    }


	*ptable_h = calloc(taille_h,sizeof(L_INT));

	if(*ptable_h ==NULL){
		puts("erreur alloc hachage");
		return 4;
	
	}
	

    fgets(mot,511,pf); // on passe la ligne Sommets du graphe
	

    for(i = 0; i<*pnbsommet; i++) { // on récupère les sommets

	if(fscanf(pf,"%d %lf %lf %s", &num, &(s.x), &(s.y),line)!=4){ // on ne peut pas lire le nom avec un scanf -> La defense = 2 string
        	puts("erreur lecture sommet");
		return 3; 
		} 	
 	fgets(nom,511,pf); // on recuperere le nom ici
//	printf("%s \n",nom);
	nom[strlen(nom)-1]='\0';
//	printf("%s \n",nom);
	s.id = num;
	s.line=strdup(line);
	s.nom=strdup(&nom[1]);
        (*pgraphe)[s.id] = s;

	// gestion du hachage
	code_h = code(nom,taille_h);
	//printf("HHHH %d HHHHH\n", code_h); 
	//printf("HHHH%sHHHHH\n", s.nom);
	(*ptable_h)[code_h] = ajout_tete_i(num, (*ptable_h)[code_h]);
	
    }

	//affiche_hac(*ptable_h,taille_h);

    fgets(mot,511,pf);  // on passe la ligne Arêtes du graphe : noeud1 noeud2 valeur

    while(fscanf(pf,"%d %d %lf",&num, &(arc.arrivee), &(arc.cout))!=EOF){
	 // on lit tant qu'on atteint pas la fin du fichier securite vis à vis du nb arc qui pourrait etre faux
        (*pgraphe)[num].voisins = ajout_tete_a(arc,(*pgraphe)[num].voisins);

    }

    fclose(pf);
    return 0;
}

void visualiser_graphe(T_SOMMET* graphe, int taille) {
    int i;
    for(i=0; i<taille; i++) {
	affiche_s(graphe[i]);
    }


}



