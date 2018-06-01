#ifndef _LISTE_ARC_H_H
#define _LISTE_ARC_H_H


#include <stdio.h>
#include "arc.h"


//DEFINITION STRUCTURE LISTE D ARC
//	T_ARC : 	l arc dans la liste
//	struct l_succ *	pointeur sur le prochain maillon
typedef struct lsucc {
    T_ARC val;
    struct lsucc* suiv;
}* L_ARC ;


//Fonction qui creer une liste d arc
//PARAMETRES
//	NC
//RETURN
//	L_ARC : 	une liste d arc initialise a NULL
L_ARC creer_liste_a(void);


//Fonction qui verifie si la liste est vide
//PARAMETRES
//	L_ARC : IN.	liste a verifier
//RETURN
//	int : 	1 si vide
//		0 sinon		
int liste_vide_a(L_ARC l);


//Fonction qui visualise une liste d arc
//PARAMETRES
//	L_ARC : IN.	liste a visualiser
//RETURN	void
void visualiser_la(L_ARC l);

//Fonction qui ajoute en tete un maillon a une liste
//PARAMETRES
//	L_ARC : IN.	liste a laquelle on veut ajouter un arc
//	T_ARC : IN.	arc que l on veut ajouter a la liste
//RETURN	
//	L_ARC : OUT.	liste augmentee
L_ARC ajout_tete_a(T_ARC a, L_ARC l);

//Fonction qui ajoute en queue un maillon a une liste
//PARAMETRES
//	L_ARC : IN.	liste a laquelle on veut ajouter un arc
//	T_ARC : IN.	arc que l on veut ajouter a la liste
//RETURN	
//	L_ARC : OUT.	liste augmentee
L_ARC ajout_queue_a(T_ARC a, L_ARC l);


#endif
