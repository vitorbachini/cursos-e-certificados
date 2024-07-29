#include <stdio.h>
#include <stdlib.h>

struct ponto{
    float x;
    float y;
    struct ponto *prox; 
};

typedef struct ponto Ponto;

Ponto *listaPontos;

void add(float x, float y){
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));
    p->x = x;
    p->y = y;
    p->prox = listaPontos;
    
    listaPontos = p;
}; 

void imprime(){
    Ponto *auxLista = listaPontos; /* Ponteiro auxiliar */
    while(auxLista != NULL){
        printf("Ponto(%.1f,%.1f)\n", auxLista->x, auxLista->y);
        auxLista = auxLista->prox;
    }
}

int main()
{

    add(1,5);
    add(2,7);
    add(5,3);
    
    imprime();
    return 0;
}
