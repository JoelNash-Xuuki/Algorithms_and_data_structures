typedef int Clé;

struct nœud{
	Clé clé;
	struct nœud *p;
	struct nœud *gauche;
	struct nœud *droite;
};

typedef struct nœud ÉLÉMENT;
typedef ÉLÉMENT* Nœud;
