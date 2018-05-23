#include <stdio.h>
#include "liste_i.h"
#include <stdlib.h>

L_INT creer_liste_i(void){
    return NULL;}

int liste_vide_i(L_INT l){
    return !l;}

void visualiser_i(L_INT l){
    if (liste_vide_i(l)){ 
//	printf("Liste Vide\n"); 
	return;	
}
    else {
    	L_INT p=l;
    	while (!liste_vide_i(p)){
		printf("%d -> ",p->val);
		/*int i ;
		i = p->val;
		*/p=p->suiv;
			/*
			FILE* 	pf = NULL;
			char mot[512];
				pf = fopen("metroetu.csv", "rt");
				//scanf("%d",&i);
				i +=2;
			for (;i>-1;i--){
			    fgets(mot,511,pf);
			}
				printf("%s \n", mot);
				fclose(pf);
			*/

    	}
	}
	puts("fin liste\n\n\n");
}

L_INT supprimer_tete_i(L_INT l){
    if (!liste_vide_i(l)){ L_INT p;
        p=l->suiv;
        free(l);
	return p;
    }
    return l;}

void liberer_i(L_INT l){
    while (!liste_vide_i(l)){
        l=supprimer_tete_i(l);
    }
}

L_INT ajout_tete_i(int cart, L_INT l){
    Maillon_i *pm = calloc(1,sizeof(*pm));
    if (pm==NULL) return creer_liste_i();
    pm->val=cart;
    pm->suiv=l;
    return pm;}

L_INT ajout_queue_i(int cart, L_INT l){
    if (liste_vide_i(l)) {return ajout_tete_i(cart,l);
        }
    L_INT p=l;
    while (!liste_vide_i(p->suiv)){
            p=p->suiv;
    }
    
    Maillon_i *pm=calloc(1,sizeof(*pm));
    if (pm==NULL) return creer_liste_i();
    
    p->suiv=pm;
    pm->val=cart;
    pm->suiv=NULL;
    return l;
}




L_INT supprime_element_i(int n, L_INT l){
	if(!liste_vide_i(l)){
		L_INT p1 =l;
		if (p1->val == n){
			return supprimer_tete_i(l);
		}
		while(p1->suiv != NULL){
			//p1=p1->suiv;
			if (p1->suiv->val == n){
				Maillon_i * tmp = p1->suiv;
				p1->suiv=p1->suiv->suiv;
				free(tmp);
				return l;
				
			}
			p1=p1->suiv;
			
		}
		
		return l;
	
	}
	return creer_liste_i();


}

