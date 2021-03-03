#include <iostream>
#include "ArbreBinaire.h"


using namespace std;

int main(){
	ArbreBinaire op = ArbreBinaire(10);
	Nœud z = op.obtenirNœud();

	Nœud y = new ÉLÉMENT;
	y -> clé = 14;
	op.arbreInsérer(z, y);

	Nœud l = new ÉLÉMENT;
	l -> clé = 3;
	op.arbreInsérer(z, l);

	Nœud x = new ÉLÉMENT;
	x -> clé = 16;
	op.arbreInsérer(y, x);

	cout << "\n\nc) z a deux d'enfants.\n\n\t\t" << z->clé;
	cout << "\n\t      "<< z->gauche->clé << "   " << z->droite->clé; 
	cout << "\n\t            " << y->droite->clé;
}




/*
void delete right
	cout << "\n\n- effacer " << z->droite->clé << " pour arbre\n\n\t\t";
	op.effacerArbre(z, z->droite);

	z = op.obtenirNœud();
	cout << z->clé; 
	cout << "\n\t\t  \\";
	cout << "\n\t\t   " << z->droite;
*/

/*
cout << "\n\n- effacer " << z->gauche->clé << " pour arbre\n\n\t\t";
	op.effacerArbre(z, z->gauche);
	z = op.obtenirNœud();
	cout << z->clé; 
	cout << "\n\t       \/";
	cout << "\n\t      " << z->gauche;
*/
