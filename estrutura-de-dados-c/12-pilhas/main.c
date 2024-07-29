#include <stdio.h>
#include <stdlib.h>

struct prato{
  char cor;
  struct prato *prox;
};

typedef struct prato Prato;

Prato *pilha; 

void add(char cor){
    Prato *p = (Prato*) malloc(sizeof(Prato));
    p->cor = cor;
    p->prox = pilha;
    pilha = p;
};

void delete(){
    if(pilha == NULL){
        printf("Pilha vazia");
    }else{
        pilha = pilha->prox;
    }
};

void imprime(Prato *p){
    if(p != NULL){
        printf("Cor do prato: %c\n", p->cor);
        imprime(p->prox);
    }
};

int main()
{
    add('b');
    add('r');
    add('g');
    add('y');
    
    delete();
    
    Prato *pilhaAux = pilha;
    imprime(pilhaAux);
    return 0;
}
