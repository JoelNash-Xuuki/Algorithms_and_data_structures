#include <iostream>
#include "ArbreBinaire.h"

using namespace std;

int main(){
	ArbreBinaire op = ArbreBinaire(10);
	Nœud racine = op.obtenirNœud();
	Nœud r = new ÉLÉMENT;
	Nœud l = new ÉLÉMENT;
	Nœud y = new ÉLÉMENT;
	Nœud x = new ÉLÉMENT;
	Nœud a = new ÉLÉMENT;
	Nœud b = new ÉLÉMENT;
	Nœud v = new ÉLÉMENT;
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

/*
	cout << "\n\nd)";
	z -> clé = 10;
	l -> clé = 3;
	r -> clé = 14;
	y -> clé = 11;
	x -> clé = 16;

	op.arbreInsérer(z, l);
	op.arbreInsérer(z, r);
	op.arbreInsérer(r, y);
	op.arbreInsérer(y, x);

	cout << "\n\t\t" << z->clé;
	cout << "\n\t       " << z->gauche->clé << "  " << z->droite->clé; 
	cout << "\n\t\t" << z->droite->gauche->clé;
	cout << "\n\t          "<< z->droite->gauche->droite->clé;

	op.effacerNœud(y->p->p, z);
	z = y;
	cout << "\n\n\t\t-->\n";
	cout << "\n\t\t" << z->clé;
	cout << "\n\t       " << z->gauche->clé << "  " << z->droite->clé; 
	cout << "\n\t\t" << z->droite->gauche->clé;
*/

	x -> clé = 'x';
	y -> clé = 'y';
	a -> clé = 'a';
	b -> clé = 'b';
	v -> clé = 'z'; 

	op.arbreInsérer(x, y);
	op.arbreInsérer(x, a);

	op.arbreInsérer(y, v);
	op.arbreInsérer(y, b);

	racine = x;

	cout << "\n\t\t" << racine->clé;
	cout << "\n\t       " << racine->gauche->clé << "  " << racine->droite->clé; 
	cout << "\n\t\t" << racine->droite->gauche->clé << "  " << racine->droite->droite->clé;  
	cout << "\n" << racine->gauche->gauche;

	op.gaucheTourner(y, x);
	racine = y;

	cout << "\n\n\t\t-->\n";
	cout << "\n\t\t" << racine->clé;
	cout << "\n\t       " << racine->gauche->clé << "  " << racine->droite->clé; 
	cout << "\n\t     " << racine->gauche->gauche->clé << "  " << racine->droite->clé;
	cout << "\n" << racine->gauche->gauche;
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
