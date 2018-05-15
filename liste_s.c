#include <stdio.h>
#include "liste_s.h"
#include <stdlib.h>

L_SOMMET creer_liste_s(void){
    return NULL;}

int liste_vide(L_SOMMET l){
    return !l;}

void visualiser(L_SOMMET l){
    if (!l) printf("Liste Vide");
    else {
    	L_SOMMET p=l;
    	while (!liste_vide(p)){
        	printf("Nom : %c \n",(p->val).nom);
		p=p->suiv;
    	}
	}
}

L_SOMMET supprimer_tete_s(L_SOMMET l){
    if (!liste_vide(l)){ L_SOMMET p;
        p=l->suiv;
        free(l);
	return p;
    }
    return l;}

void liberer(L_SOMMET l){
    while (!liste_vide(l)){
        l=supprimer_tete_s(l);
    }
}

L_SOMMET ajout_tete_s(T_SOMMET cart, L_SOMMET l){
    Maillon_s *pm = calloc(1,sizeof(*pm));
    if (pm==NULL) return creer_liste_s();
    pm->val=cart;
    pm->suiv=l;
    return pm;}

L_SOMMET ajout_queue_s(T_SOMMET cart, L_SOMMET l){
    if (liste_vide(l)) {return ajout_tete_s(cart,l);
        }
    L_SOMMET p=l;
    while (!liste_vide(p->suiv)){
            p=p->suiv;
    }
    
    Maillon_s *pm=calloc(1,sizeof(*pm));
    if (pm==NULL) return creer_liste_s();
    
    p->suiv=pm;
    pm->val=cart;
    pm->suiv=NULL;
    return l;
}

L_SOMMET supprimer_element_s(T_SOMMET n, L_SOMMET l){
	if (liste_vide(l)) return creer_liste_s();
	L_SOMMET p1 =l;
	if (!strcmp((p1->val).nom,n.nom)){
		return supprimer_tete_s(l);	
	}
	L_SOMMET p2 = l->suiv;
	while (!p2){
		if (!strcmp((p2->val).nom,n.nom)){
			Maillon_s * temp = p2->suiv;
			free(p2->suiv);
			p1->suiv =temp ;
		}
		p1=p2;
		p2 = p2->suiv;
	}
	
	return l;
}

