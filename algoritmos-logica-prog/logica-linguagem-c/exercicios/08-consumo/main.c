#include <stdio.h>

int main()
{
    double distancia, gas, media;
    printf("Distancia percorrida(Km): ");
    scanf("%lf", &distancia);
    printf("Combustivel gasto(L): ");
    scanf("%lf", &gas);
    
    media = distancia / gas;
    printf("Consumo medio = %.3lf", media);
    

    return 0;
}
