#include <iostream>
#include "Nœud.h"

class ArbreBinaire{
private:
	Nœud nœud;
	void traduire(Nœud racine, Nœud u, Nœud v);
	Nœud arbreMin(Nœud x);
	Nœud arbreMax(Nœud x);
public:
	ArbreBinaire(int c);
	void arbreInsérer(Nœud t, Nœud z);
	Nœud obtenirNœud();
	void effacerArbre(Nœud t, Nœud z);
};
