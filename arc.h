#ifndef _ARC_H_H
#define _ARC_H_H


//DEFINITION STRUCTURE ARC
//	int:	un champ definissant l arrivee de l arc
//	double:	un champ definissant le cout de l arc
typedef struct {     			
    int arrivee;			
    double cout;
} T_ARC; 

// Fonction affiche d'un arc
// PARAMETRES
//	s : IN. un arc qui va etre afficher
// RETURN	void
void affiche_a(T_ARC a);

#endif
