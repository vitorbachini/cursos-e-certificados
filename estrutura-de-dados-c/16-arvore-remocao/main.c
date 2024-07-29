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

void delete(Nodo *n, int value){
    Nodo *filho = n;
    Nodo *pai;
    
    do{
        pai = filho;
        if(value < filho->value){
            filho = filho->esq;
        }else if(value > filho->value){
            filho = filho->dir;
        }
    }while(filho != NULL && filho->value != value);
        
        if(filho != NULL){
            if(filho->esq == NULL && filho->dir == NULL){ // Caso 1: Nodo não tem filhos
                if(pai->esq == filho){
                    pai->esq = NULL;
                }
                if(pai->dir == filho){
                    pai->dir = NULL;
                }
            }
            
            if(filho->esq != NULL && filho->dir == NULL){ // Caso 2: nodo filho tem um filho a esquerda
                if(pai->esq == filho){
                    pai->esq = filho->esq;
                }
                if(pai->dir == filho){
                    pai->dir = filho->esq;
                }
            }
            
            if(filho->dir != NULL && filho->esq == NULL){ // Caso 2: nodo filho tem um filho a direita
                if(pai->esq == filho){
                    pai->esq = filho->dir;
                }
                if(pai->dir == filho){
                    pai->dir = filho->dir;
                }
            }
            
            if(filho->esq != NULL && filho->dir != NULL){ // Caso 3: nodo filho tem 2 filhos
                if(filho->esq->dir == NULL){
                    filho->value = filho->esq->value;
                    filho->esq = NULL;
                }else{
                    Nodo *p = filho->esq;
                    Nodo *aux = p;
                    while(p->dir != NULL){
                        aux = p;
                        p = p->dir;
                    }
                    aux->dir = NULL;
                    filho->value = p->value;
                }
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
    
    delete(root, 2);
    
    imprime(root);
    return 0;
}
