#ifndef _LC_H_H
#define _LC_H_H


#include <stdio.h>
#include <string.h>


//DEFINITION STRUCTURE LISTE DE CHAR
//	char* : 		valeur de la chaine de caractere
//	struct cellule * :	pointeur sur le prochain maillon
struct cellule {
    char* val;
    struct cellule * suiv;
} ;

//renommage du type defini
typedef struct cellule * L_CHAR;


//Fonction qui creer une liste de char
//PARAMETRES
//	NC
//RETURN
//	L_CHAR : 	une liste de char initialise a NULL
L_CHAR creer_liste_c(void);


//Fonction qui verifie si la liste est vide
//PARAMETRES
//	L_CHAR : IN.	liste a verifier
//RETURN
//	int : 	1 si vide
//		0 sinon	
int est_vide_c(L_CHAR L);


//Fonction qui recherche un mot dans la liste
//PARAMETRES
//	char* : 	mot qu on recherche
//	L_CHAR :	lsite de mot
//RETURN
//	L_CHAR : 	liste avec le mot qu'on recherche en tete
L_CHAR rech_c(char* s, L_CHAR L);


//Fonction qui ajoute en tete un maillon a une liste
//PARAMETRES
//	L_CHAR : IN.	liste a laquelle on veut ajouter un mot
//	char* : IN.	mot que l on veut ajouter a la liste
//RETURN	
//	L_ARC : OUT.	liste augmentee
L_CHAR ajout_tete_c(char* s, L_CHAR L);

#endif
