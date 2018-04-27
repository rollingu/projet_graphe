#include <stdio.h>
#include "liste_s.h"
#include <stdlib.h>

L_SOMMET creer_liste(void){
    return NULL;}

int liste_vide(L_SOMMET l){
    return !l;}

void visualiser(L_SOMMET l){
    if (liste_vide(l)) printf("Liste Vide");
    else {
    	L_SOMMET p=l;
    	while (!liste_vide(p)){
        	affiche(&p->val);
		p=p->suiv;
    	}
	}
}

L_SOMMET supprimer_tete(L_SOMMET l){
    if (!liste_vide(l)){ L_SOMMET p;
        p=l->suiv;
        free(l);
	return p;
    }
    return l;}

void liberer(L_SOMMET l){
    while (!liste_vide(l)){
        l=supprimer_tete(l);
    }
}

L_SOMMET ajout_tete(T_SOMMET cart, L_SOMMET l){
    Maillon *pm = calloc(1,sizeof(*pm));
    if (pm==NULL) return creer_liste();
    pm->val=cart;
    pm->suiv=l;
    return pm;}

L_SOMMET ajout_queue(T_SOMMET cart, L_SOMMET l){
    if (liste_vide(l)) {return ajout_tete(cart,l);
        }
    L_SOMMET p=l;
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

L_SOMMET supprimen(int n, L_SOMMET l){
	if (liste_vide(l)) return creer_liste();
	if (n==0) return supprimer_tete(l);
	int i;
	L_SOMMET p =l;
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

