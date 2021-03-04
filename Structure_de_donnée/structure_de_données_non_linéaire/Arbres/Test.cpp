#include <iostream>
#include "ArbreBinaire.h"


using namespace std;

int main(){
	ArbreBinaire op = ArbreBinaire(10);
	Nœud z = op.obtenirNœud();
	Nœud r = new ÉLÉMENT;
	Nœud l = new ÉLÉMENT;
	Nœud y = new ÉLÉMENT;
	Nœud x = new ÉLÉMENT;
/*
	r -> clé = 14;
	op.arbreInsérer(z, r);
	cout << "\n a)";
	op.effacerNœud(r, z);
	z = r;
	cout << "\n\t\t" << z->clé;
	cout << "\n\t  	   " << r->droite;
	
   	l -> clé = 3;
	op.arbreInsérer(z, l);
	cout << "\n b)";
	op.effacerNœud(l, z);
	z = l;
	cout << "\n\t\t" << z->clé;
	cout << "\n\t      " << l->gauche;
*/

/*
	cout << "\n\nc) y a d'enfants à droite";
	z -> clé = 10;
	l -> clé = 3;
	y -> clé = 14;
	x -> clé = 16;
	
	op.arbreInsérer(z, y);
	op.arbreInsérer(z, l);
	op.arbreInsérer(y, x);
	
	cout << "\n\n\t\t" << z->clé;
	cout << "\n\t       " << z->gauche->clé << "  " << z->droite->clé; 
	cout << "\n\t            " << z->droite->droite->clé;

	cout << "\n\t\t-->\n";

	op.effacerNœud(y->p, z);
	z = y;

	cout << "\n\t\t" << z->clé;
	cout << "\n\t       " << z->gauche->clé << "  " << z->droite->clé; 
	cout << "\n\t            " << z->droite->droite;
*/

	 
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
