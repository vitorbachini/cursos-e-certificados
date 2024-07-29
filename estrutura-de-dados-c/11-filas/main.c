#include <stdio.h>
#include <stdlib.h>

struct pessoa{
  int senha;
  struct pessoa *prox;
};

typedef struct pessoa Pessoa;

Pessoa *fila; // Ponteiro apontando para o início

void add(int senha){
    Pessoa *p = (Pessoa*) malloc(sizeof(Pessoa));
    p->senha = senha;
    p->prox = NULL;
    
    if(fila == NULL){
        fila = p;
    }else{
        Pessoa *filaAux = fila;
        while(filaAux->prox != NULL){
            filaAux = filaAux->prox;
        }
        filaAux->prox = p;
    }
};

void delete(){
    if(fila == NULL){
        printf("Fila vazia");
    }else{
        fila = fila->prox;
    }
};

void imprime(Pessoa *f){
    if(f != NULL){
        printf("Senha da Pessoa: %d\n", f->senha);
        imprime(f->prox);
    }
};

int main()
{
    
    add(5);
    add(8);
    add(10);
    add(22);

    Pessoa *filaAux = fila;
    imprime(filaAux);
    
    printf("\n");
    
    delete();
    filaAux = fila;
    imprime(filaAux);
    
    printf("\n");
    
    delete();
    filaAux = fila;
    imprime(filaAux);
    return 0;
}
