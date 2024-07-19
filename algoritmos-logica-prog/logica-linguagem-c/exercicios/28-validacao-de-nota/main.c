#include <stdio.h>

int main()
{
    double nota1, nota2, media;
    printf("Digite o valor da primeira nota: ");
    scanf("%lf", &nota1);
    
    while(nota1 < 0 || nota1 > 10){
        printf("Valor invalido! Tente novamente: ");
        scanf("%lf", &nota1);
    }
    
    printf("Digite o valor da segunda nota: ");
    scanf("%lf", &nota2);

    while(nota2 < 0 || nota2 > 10){
        printf("Valor invalido! Tente novamente: ");
        scanf("%lf", &nota2);
    }
    
    media = (double) (nota1 + nota2) / 2;
    printf("Media = %.2lf", media);
    return 0;
}
