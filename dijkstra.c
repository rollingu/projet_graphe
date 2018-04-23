#include "dijkstra.h"
#include "liste.h"

L_INT adjacents(T_SOMMET sommet){
	L_ARC p = T_SOMMET.voisins;
	L_INT sortie = creer_liste_i();

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

bool est_dans_liste(int a, L_INT liste){
	L_INT p = liste;
	while (!p){
		if (p->val == a) return true;	
	}
	return false;
}

void algo( T_SOMMET * graphe, int taille, int a, int b){ // avec a le numero du sommet de depart, et b le numéro du sommet d'arrivée. potentiellement a modifier pour partir des noms de sommets plutot
	double * pcc = calloc(taille, sizeof(double));
	double * pere = calloc(taille, sizeof(double));
	int i;
	
	L_SOMMET c = creer_liste_s(); // attention ce sont des listes de sommets
	L_SOMMET s = creer_liste_s();

		
	
	for (i=0;i<taille;i++){
		pcc[i] = -1;
		pere[i] = -1;
		s = ajout_queue_s(graphe[i],s);
	}
	
	pcc[a] = 0;
	
	
	
	do
	{
		int j = sommetmin; // changer	
	} while ( (!est_dans_liste(j,adj)) && (ppc[j] != -1) );
	
	
}

