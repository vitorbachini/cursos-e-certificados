#include <stdio.h>
#include <stdlib.h>

struct nodo{
    int value;
    struct nodo *esq;
    struct nodo *dir;
};

typedef struct nodo Nodo;

Nodo* create(int value){
    Nodo *n = malloc(sizeof(Nodo));
    n->value = value;
    n->esq = NULL;
    n->dir = NULL;
    
    return n;
};

void imprime(Nodo *n){
    if(n == NULL){
        return;
    }
    printf("%d\n", n->value);
    imprime(n->esq);
    imprime(n->dir);
};

int main()
{
    Nodo *nodo5 = create(5);
    Nodo *nodo2 = create(2);
    Nodo *nodo1 = create(1);
    Nodo *nodo8 = create(8);
    Nodo *nodo4 = create(4);
    
    nodo5->esq = nodo2;
    nodo2->esq = nodo1;
    nodo5->dir = nodo8;
    nodo8->dir = nodo4;
    
    imprime(nodo5);
    return 0;
}
