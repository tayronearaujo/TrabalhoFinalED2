//Arquivo Grafo.h

typedef struct grafo Grafo;

Grafo* cria_Grafo(int nro_vertices, int grau_max);
void libera_Grafo(Grafo* gr);
int insereAresta(Grafo* gr, int orig, int dest);
int removeAresta(Grafo* gr, int orig, int dest);



void imprime_Grafo(Grafo *gr);
