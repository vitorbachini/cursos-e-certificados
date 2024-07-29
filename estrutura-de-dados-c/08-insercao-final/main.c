#include <stdio.h>
#include <stdlib.h>

struct ponto{
    float x;
    float y;
    struct ponto *prox; 
};

typedef struct ponto Ponto;

Ponto *listaPontos; // aponta para o início da lista

void addFirst(float x, float y){
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));
    p->x = x;
    p->y = y;
    p->prox = listaPontos;
    
    listaPontos = p;
}; 

void addLast(float x, float y){
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));
    p->x = x;
    p->y = y;
    p->prox = NULL;
    
    if(listaPontos == NULL){
        listaPontos = p;
    }else{
        Ponto *listaAux = listaPontos;
        while(listaAux->prox != NULL){
            listaAux = listaAux->prox;
        }
        listaAux->prox = p;
    }
};

void imprime(Ponto *p){
    if(p != NULL){
        printf("Ponto(%.1f,%.1f)\n", p->x, p->y);
        imprime(p->prox);
    }
};

int main()
{

    addFirst(1,5);
    addFirst(2,7);
    addFirst(5,3);
    addLast(1,1);
    addLast(8,8);
    
    Ponto *auxLista = listaPontos;
    imprime(auxLista);
    return 0;
}
