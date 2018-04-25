#include "dijkstra.h"
#include "liste.h"

L_INT adjacents(T_SOMMET * graphe,int sommet){
	L_ARC p = T_SOMMET.voisins;
	L_SOMMET sortie = creer_liste_i();

	if (!p={
		sortie = ajout_queue_i(p->val.arrivee,sortie);	
	}
	p = p->suiv;
	while (!p){
		sortie = ajout_queue_i(p->val.arrivee,sortie);
		p = p->suiv;	
	}
	return sortie;
}

bool est_dans_liste(T_SOMMET * graphe,int a, L_INT liste){
	L_INT p = liste;
	while (!p){
		if ( p->val == a ) return true;
		p = p->suiv;	
	}
	return false;
}

double calcul_cout(T_SOMMET * graphe,int a, int b){ // a et b sont les sommets, on veut le cout pour aller de a vers b
	L_ARC p = graphe[a].voisins;
	while (!p){
		if ( (p->val).arrivee == b ){
			return (p->val).cout;		
		}
		p = p->suiv;
	}
	return -1; // si on return -1, cela veut dire que a et b ne sont a priori pas voisins
	
	
}

void algo( T_SOMMET * graphe, int taille, int a, int b){ // avec a le numero du sommet de depart, et b le numéro du sommet d'arrivée. potentiellement a modifier pour partir des noms de sommets plutot
	double * pcc = calloc(taille, sizeof(double));
	double * pere = calloc(taille, sizeof(double));
	int i;
	
	L_INT c = creer_liste_i(); // attention ce sont des listes de sommets
	int * s[taille]; 
	
	L_INT adj = adjacents(graphe,a);
		
	
	for (i=0;i<taille;i++){
		pcc[i] = -1;
		pere[i] = -1;
		c = ajout_queue_i(i,c);
		s[i] = 0;
	}
	
	pcc[a] = 0;
	
	int pccmin = -1;
	int j = -1;
	int sj = -1;

	do
	{
		// Selection du sommet sj de C de plus petite valeur de pcc[j]		
		
		L_INT point = L_INT c;
		if (!point) {
			j = point->val;		
			pccmin = pcc[j];

			point = point->suiv;

			while (!point){ // attention ! trop long, il faut avoir la liste c triée par pcc croissant
				j = point->val;
				if ( (pcc[j] < pccmin) && (pcc[j] >= 0 )) { 
					pccmin = pcc[j];
					sj = point->val;			
				}
				point = point->suiv;			
			}
		}
		// ici : sj est le sommet de plus petite valeur de pcc[j]

		c = supprimer_element_s(sj,c);
		s[sj] = 1;

		// faire pour tous les sommets adjacents : 
		T_SOMMET k;
		L_SOMMET point = adj;
		int coutJK = -1;
		while (!point){
			k = point->val;
			
		}
			
		
		
		
			
	} while ( (!s[a]) && (ppc[sj] != -1) );
	
	
}

