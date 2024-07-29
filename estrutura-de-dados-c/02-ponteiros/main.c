#include <stdio.h>

int *p; /* Criando um ponteiro chamado "p" */
int value = 5;

int main()
{
    
    p = &value; /* Atribuindo o ponteiro para o endereço da variavel value */
    printf("O valor de apontado por 'p' é: %d", *p);

    return 0;
}
