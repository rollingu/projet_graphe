#include <stdio.h>
#include "liste_i.h"
#include <stdlib.h>

L_INT creer_liste_i(void){
    return NULL;}

int liste_vide(L_INT l){
    return !l;}

void visualiser(L_INT l){
    if (liste_vide(l)) printf("Liste Vide");
    else {
    	L_INT p=l;
    	while (!liste_vide(p)){
        	affiche(&p->val);
		p=p->suiv;
    	}
	}
}

L_INT supprimer_tete(L_INT l){
    if (!liste_vide(l)){ L_INT p;
        p=l->suiv;
        free(l);
	return p;
    }
    return l;}

void liberer(L_INT l){
    while (!liste_vide(l)){
        l=supprimer_tete(l);
    }
}

L_INT ajout_tete(int cart, L_INT l){
    Maillon *pm = calloc(1,sizeof(*pm));
    if (pm==NULL) return creer_liste_i();
    pm->val=cart;
    pm->suiv=l;
    return pm;}

L_INT ajout_queue_i(int cart, L_INT l){
    if (liste_vide(l)) {return ajout_tete(cart,l);
        }
    L_INT p=l;
    while (!liste_vide(p->suiv)){
            p=p->suiv;
    }
    
    Maillon *pm=calloc(1,sizeof(*pm));
    if (pm==NULL) return creer_liste_i();
    
    p->suiv=pm;
    pm->val=cart;
    pm->suiv=NULL;
    return l;
}

L_INT supprimen(int n, L_INT l){
	if (liste_vide(l)) return creer_liste_i();
	if (n==0) return supprimer_tete(l);
	int i;
	L_INT p =l;
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

