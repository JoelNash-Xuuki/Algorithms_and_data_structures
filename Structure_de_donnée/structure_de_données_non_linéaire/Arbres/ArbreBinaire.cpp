#include <iostream>
#include "ArbreBinaire.h"

ArbreBinaire::ArbreBinaire(int c){
	nœud = new ÉLÉMENT;
	nœud -> clé = c;
	nœud -> p = NULL;
	nœud -> gauche = NULL;
	nœud -> droite = NULL;
}


Nœud ArbreBinaire::arbreMin(Nœud x){
	while(x->gauche != NULL)
		x = x->gauche;
	return x;
}

Nœud ArbreBinaire::arbreMax(Nœud x){
	while(x->gauche != NULL)
		x = x->droite;
	return x;
}

void ArbreBinaire::arbreInsérer(Nœud racine, Nœud z){
	Nœud y = NULL;
	Nœud x = racine;
	while (x != NULL){
		y = x;
		if (z->clé < x->clé)
			x = x->gauche;
		else 
			x = x->droite;
	}
	z->p = y;
	if (y == NULL)
		racine = z;
	else if (z->clé < y->clé)
		y->gauche = z;
	else 
		y->droite = z;
}

void  ArbreBinaire::traduire(Nœud racine,Nœud u,Nœud v){
	if (u->p == NULL)
		racine = v;
	else if (u == u->p->gauche)
		u->p->gauche = v;
	else
		u->p->droite = v;
	if (v != NULL)
		v->p = u->p;
}

void ArbreBinaire::effacerArbre(Nœud t,Nœud z){
	if (z->gauche == NULL)
		traduire(t, z, z->droite);
	else if (z->droite == NULL)
		traduire(t, z, z->gauche);
	else {
		Nœud y = arbreMin(z->droite);
		if(y->p != z){
			traduire(t, y, y->droite);
			y->droite = z->droite;
			y->droite->p = y;
		}
		traduire(t,z,y);
		y->droite = z->gauche;
		y->gauche->p = y;
	}
}

Nœud ArbreBinaire::obtenirNœud(){
	return nœud;
}




