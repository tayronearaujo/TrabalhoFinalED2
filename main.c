#include <stdio.h>
#include <stdlib.h>
#include "Grafo.h"
int main(){
    int eh_digrafo = 1;
    Grafo* gr = cria_Grafo(5, 5);

    insereAresta(gr, 0, 1);
    insereAresta(gr, 1, 3);
    insereAresta(gr, 1, 2);
    insereAresta(gr, 2, 4);
    insereAresta(gr, 3, 0);
    insereAresta(gr, 3, 4);
    insereAresta(gr, 4, 1);

    imprime_Grafo(gr);

    libera_Grafo(gr);

    system("pause");
    return 0;
}
