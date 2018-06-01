#ifndef _HACH_H_H
#define _HACH_H_H


#include "liste_i.h"
#include <stdio.h>


// Fonction de code de hachage
// PARAMETRES
//	mot : 	IN. chaine de caractere du mot dont on veut le code de hachage
//	N :	IN. longueur de la table de hachage
// RETURN
//	code :	OUT. code de hachage du mot passe en entree
int code(char * mot, int N);

// Fonction d affichage de la table de hachage
// PARAMETRES
//	L_INT* :IN. table de hachage
//	l :	IN. longueur de la table de hachage
// RETURN	void
void affiche_hac(L_INT* table, int l);


#endif
