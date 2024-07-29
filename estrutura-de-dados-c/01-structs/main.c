#include <stdio.h>

struct pessoa
{
    int idade;
    float altura;
}; /* Criação de uma struct */

typedef struct pessoa Pessoa; /* Redefinindo "struct pessoa" para "Pessoa" */

int main()
{
    
    Pessoa p; /* Atribuição da struct a uma variavel */
    
    p.idade = 5;
    p.altura = 1.65;
    
    printf("A idade da pessoa é: %d\n", p.idade);
    printf("A altura da pessoa é: %.2f", p.altura);

    return 0;
}