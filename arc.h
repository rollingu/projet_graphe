#ifndef _ARC_H_H
#define _ARC_H_H

typedef struct {     			// on définit un arc par son cout
    int arrivee;			// et le numéro où il arrive.
    double cout;
} T_ARC; // à référencer par pointeur

void affiche_a(T_ARC a);

#endif
