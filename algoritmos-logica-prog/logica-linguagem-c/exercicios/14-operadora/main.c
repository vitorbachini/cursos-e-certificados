#include <stdio.h>

int main()
{
    int minutos;
    double valor;
    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);
    
    valor = 50;
    if(minutos <= 100){
        printf("Valor a pagar: R$ %.2lf", valor);
    }else if(minutos > 100){
        valor = valor + (minutos - 100) * 2;
        printf("Valor a pagar: R$ %.2lf", valor);
    }

    return 0;
}
