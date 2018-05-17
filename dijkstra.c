#include <stdlib.h>
#include "liste_i.h"
#include "dijkstra.h"
#include <limits.h>
#include "HEAP.h"

//HODOR

L_INT adjacents(T_SOMMET * graphe,int sommet){
	L_ARC p = (graphe[sommet]).voisins;
	L_INT sortie = creer_liste_i();

	if (!p){
		//sortie = ajout_queue_i((p->val).arrivee,sortie);	
		return sortie;
	}
	sortie = ajout_queue_i((p->val).arrivee,sortie);
	p = p->suiv;
	while (p!=NULL){
		sortie = ajout_queue_i((p->val).arrivee,sortie);
		p = p->suiv;	
	}
	return sortie;
}

int est_dans_liste(int a, L_INT liste){
	L_INT p = liste;
	while (p!=NULL){
		if ( p->val == a ) return 1;
		p = p->suiv;	
	}
	return 0;
}

double calcul_cout(T_SOMMET * graphe,int a, int b){ // a et b sont les sommets, on veut le cout pour aller de a vers b
	L_ARC p = graphe[a].voisins;
	while (p!=NULL){
		if ( (p->val).arrivee == b ){
			return (p->val).cout;		
		}
		p = p->suiv;
	}
	return -1; // si on return -1, cela veut dire que a et b ne sont a priori pas voisins
	
	
}

void algo( T_SOMMET * graphe, int taille, int a, int b, double * pere){ // avec a le numero du sommet de depart, et b le numéro du sommet d'arrivée. potentiellement a modifier pour partir des noms de sommets plutot
	int pcc[taille];
	//double pere[taille];
	int i;
	int tempo;
	//L_INT c = creer_liste_i(); 
	int taille_triee= taille-1;

	int tas_c[taille];
	

	int s[taille];
	
	L_INT adj;
	
	
		

	for (i=0;i<taille;i++){
		pcc[i] = INT_MAX;
		pere[i] = -1;
		//c = ajout_queue_i(i,c);
		tas_c[i] = i; // on ajoute tous les elements dans le tas
		 
		s[i] = 0;
	}
	
	pcc[a] = 0;
	tempo = tas_c[a];
	tas_c[a] = 0;
	tas_c[0] = tempo;

	
	
	
	
	int pccmin = INT_MAX;
	int j = -1;
	int sj = -1;
	L_INT point;
	int k; // k est le numéro du sommet
	int coutJK = -1;
	L_INT point1;
	do
	{
		
		printf("Debut de tour :\n");
		// Selection du sommet sj de C de plus petite valeur de pcc[j]	

		// avec le tas : en supposant que l'augmentation du tas ai ete bien faite, tas[0] est deja le numero du sommet de plus ptit pcc
		// il faut trier le tas a chaque etape
		for (i=0;i<taille_triee;i++){ // arrive ici, tas_c est un tableau qui contient un tas de 1 element : le premier

			augmentetas(pcc,tas_c,i); // on met donc le tas a jour pour avoir un tas sur tout le tableau
		}
		sj = tas_c[0];

			
		//pccmin = LONG_MAX;
		//point = c;
		//if (point) {
			////j = point->val;		
			////pccmin = pcc[j];

			////point = point->suiv;

			//while (point!=NULL){ // attention ! trop long, il faut avoir la liste c triee par pcc croissant
				//j = point->val;
				//if ( (pcc[j] < pccmin) && (pcc[j] >= 0 )) { 
				//	pccmin = pcc[j];
				//	sj = point->val;		
				//}
				//point = point->suiv;			
			//}
		//}
		// ici : sj est le sommet de plus petite valeur de pcc[j]
		
		printf("Valeur de sj : %d \n",sj);
		//c = supprime_element_i(sj,c);

		// pour supprimer lelement sj ( qui est celui de plus petit pcc, donc le premier) dans le tas :
		suppressiontas(pcc,tas_c,taille_triee,taille);
		taille_triee -= 1;

		s[sj] = 1;
		adj= adjacents(graphe,sj);
		// faire pour tous les sommets adjacents : 
		
		point1 = adj;
		coutJK = -1;
		while (point1!=NULL){
			k = point1->val;
			coutJK = calcul_cout(graphe,sj,k);
			//if ( pcc[k] = -1 && coutJK != -1){ // probleme ici, ce if est tout le temps verifie...
				//pcc[k] = pcc[sj] + coutJK;
				//pere[k] = sj;
			//}
			if ( pcc[k]>(pcc[sj] + coutJK)){
				pcc[k] = pcc[sj] + coutJK;
				pere[k] = sj;
			}
			point1 = point1->suiv;
		}
		printf("Fin de tour :\n");
		
		
	} while ( (pcc[sj] < INT_MAX) && (s[b]==0));
	
}

