#include "Nœud.h"

Nœud::Nœud(int c){
	nœud = new ÉLÉMENT;
	nœud -> clé = c;
	nœud -> p = NULL;
	nœud -> gauche = NULL;
	nœud -> droite = NULL;
}
