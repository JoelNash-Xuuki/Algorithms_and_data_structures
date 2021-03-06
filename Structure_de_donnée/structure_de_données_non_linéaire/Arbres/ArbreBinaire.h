#include <iostream>
#include "Nœud.h"

class ArbreBinaire{
private:
	Nœud nœud;
	void traduire(Nœud racine, Nœud u, Nœud v);
	Nœud arbreMin(Nœud x);
	Nœud arbreMax(Nœud x);
public:
	ArbreBinaire(char c);
	void arbreInsérer(Nœud t, Nœud z);
	Nœud obtenirNœud();
	void effacerNœud(Nœud t, Nœud z);
	void gaucheTourner(Nœud t, Nœud x);
};
