#include <stdio.h>

int main()
{
    double L, C, M, area, preco;
    
    printf("Digite a largura do terreno: ");
    scanf("%lf", &L);
    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &C);
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &M);
    
    area = L * C;
    preco = area * M;
    
    printf("Area do terreno: %.2lf\n", area);
    printf("Preco do terreno: %.2lf\n", preco);
    
    return 0;
}
