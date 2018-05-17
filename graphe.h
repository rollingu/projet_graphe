#include <stdio.h>
#include "arc.h"
#include "sommet.h"
#include "liste_arc.h"
#include "hachage.h"



// Fonction de chargement du graphe
// PARAMETRES
//   nomfic: IN. chaine de caractere du nom du fichier
//   ptaille: OUT. *ptaille sera affecte du nb de sommets trouvé dans le fichier
//   pgraphe: OUT. *pgraphe sera affecte par un tableau de sommet et correspond au graphe
// RETURN
//   err : OUT. un code erreur
// 		0: pas d'erreur
//		1: erreur ouverture fichier
//		2: erreur d'allocation du graphe
//		3: erreur de lecture dans le fichier
int load_graphe( char * nomfic, T_SOMMET** pgraphe, int* ptaille );


// Fonction de visualisation du graphe
// PARAMETRES
//  *pgraphe: IN. graphe
//   taille : IN. taille du graphe
// RETURN void
void visualiser_graphe(T_SOMMET * pgraphe, int taille);
