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

void add(Nodo *n, int value){
    if(value < n->value){
        if(n->esq == NULL){
            n->esq = create(value);
        }else{
            add(n->esq, value);
        }    
    }else{
        if(n->dir == NULL){
            n->dir = create(value);    
        }else{
            add(n->dir, value);
        } 
    }
    
    
};

int main()
{
    Nodo *root = create(5);
    
    add(root, 2);
    add(root, 1);
    add(root, 8);
    add(root, 4);
    
    imprime(root);
    return 0;
}
