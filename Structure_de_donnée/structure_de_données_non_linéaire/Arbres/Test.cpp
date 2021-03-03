#include <iostream>
#include "ArbreBinaire.h"

using namespace std;

int main(){
	ArbreBinaire op = ArbreBinaire(10);
	Nœud z = op.obtenirNœud();

	Nœud r = new ÉLÉMENT;
	r -> clé = 14;

	op.arbreInsérer(z, r);

	cout << "a) z n'a pas d'enfant à gauche.\n\t\t" << z->clé; 
	cout << "\n\t\t  \\";
	cout << "\n\t\t   " << z->droite->clé;

	cout << "\n\n- effacer " << z->droite->clé << " pour arbre\n\t\t";
	op.effacerArbre(z, z->droite);

	z = op.obtenirNœud();

	cout << z->clé; 
	cout << "\n\t\t  \\";
	cout << "\n\t\t   " << z->droite;

}
