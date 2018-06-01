#ifndef _L_INT_H_H
#define _L_INT_H_H

#include <stdio.h>


//DEFINITION STRUCTURE LISTE D ENTIER
//	int : 			valeur de l entier dans la liste
//	struct maillon_i * :	pointeur sur le prochain maillon
struct maillon_i {
    int val;
    struct maillon_i * suiv;
    };

//renommage des types definis
typedef struct maillon_i Maillon_i;
typedef Maillon_i * L_INT;

//Fonction qui creer une liste de int
//PARAMETRES
//	NC
//RETURN
//	L_INT : 	une liste de char initialise a NULL
L_INT creer_liste_i();


//Fonction qui verifie si la liste est vide
//PARAMETRES
//	L_INT : IN.	liste a verifier
//RETURN
//	int : 	1 si vide
//		0 sinon	
int liste_vide_i(L_INT l);


//Fonction qui visualise une liste d entier
//PARAMETRES
//	L_INT : IN.	liste a visualiser
//RETURN	void
void visualiser_i(L_INT l);

//Fonction qui ajoute en tete un maillon a une liste
//PARAMETRES
//	L_INT : IN.	liste a laquelle on veut ajouter un mot
//	int : IN.	mot que l on veut ajouter a la liste
//RETURN	
//	L_INT : OUT.	liste augmentee
L_INT ajout_tete_i(int a, L_INT l);


//Fonction qui supprime la tete d une liste d entier
//PARAMETRES
//	L_INT : IN.	liste a laquelle on veut enlever la tete
//RETURN	
//	L_INT : OUT.	liste avec la tete enlevee
L_INT supprimer_tete_i(L_INT l);


//Fonction qui libere la memoire de toute la liste
//PARAMETRES
//	L_INT : IN.	liste a libere
//RETURN	void
void liberer_i(L_INT l);

//Fonction qui ajoute en queue un entier
//PARAMETRES
//	L_INT : IN.	liste a augmentee
//	int : IN.	entier a ajouter
//RETURN	
//	L_INT : OUT. 	liste augmentee
L_INT ajout_queue_i(int a, L_INT l);


//Fonction qui supprime un entier  x dans la liste s il y es
//PARAMETRES
//	L_INT : IN.	liste dans lequelle supprimer
//	int : INT.	entier a supprimer
//RETURN
//	L_INT : OUT. 	liste diminuee si l entier x y etait
L_INT supprime_element_i(int n, L_INT l);

#endif

