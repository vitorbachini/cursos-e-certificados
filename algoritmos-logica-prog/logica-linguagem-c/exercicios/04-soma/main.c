#include <stdio.h>

int main()
{
    int x, y, soma;
    
    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    soma = x + y;
    
    printf("Soma = %d", soma);
    return 0;
}