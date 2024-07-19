#include <stdio.h>

int main()
{
    int idade, soma, cont;
    double media;
    
    printf("Digite as idades: \n");
    scanf("%d", &idade);
    
    soma = 0;
    cont = 0;
    if(idade >= 0){
        while(idade >= 0){
            soma = soma + idade;
            cont = cont + 1;
            scanf("%d", &idade);
        }
        media = (double) soma / cont;
        printf("Media: %.2lf\n", media);
    }else{
        printf("Impossivel calcular.");
    }

    return 0;
}
