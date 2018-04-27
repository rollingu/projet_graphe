#include <stdio.h>
#include "liste.h"
#include <stdlib.h>

Liste creer_liste(void){
    return NULL;}

int liste_vide(Liste l){
    return !l;}

void visualiser(Liste l){
    if (liste_vide(l)) printf("Liste Vide");
    else {
    	Liste p=l;
    	while (!liste_vide(p)){
        	affiche(&p->val);
		p=p->suiv;
    	}
	}
}

void liberer(Liste l){
    while (!liste_vide(l)){
        l=supprimer_tete(l);
    }
}

Liste ajout_tete(CARTE cart, Liste l){
    Maillon *pm = calloc(1,sizeof(*pm));
    if (pm==NULL) return creer_liste();
    pm->val=cart;
    pm->suiv=l;
    return pm;}

Liste ajout_queue(CARTE cart, Liste l){
    if (liste_vide(l)) {return ajout_tete(cart,l);
        }
    Liste p=l;
    while (!liste_vide(p->suiv)){
            p=p->suiv;
    }
    
    Maillon *pm=calloc(1,sizeof(*pm));
    if (pm==NULL) return creer_liste();
    
    p->suiv=pm;
    pm->val=cart;
    pm->suiv=NULL;
    return l;
}

Liste supprimen(int n, Liste l){
	if (liste_vide(l)) return creer_liste();
	if (n==0) return supprimer_tete(l);
	int i;
	Liste p =l;
	for ( i=1;i<n;i++){
		p=p->suiv;
		if (p==NULL) printf("tes moche");
	}
	// p point ici sur la case (n-1)
	Maillon * temp = p->suiv->suiv;
	free(p->suiv);
	p->suiv =temp ;
	
	
	return l;
}

