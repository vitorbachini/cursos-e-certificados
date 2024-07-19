#include <stdio.h>

int main()
{
    double medida;
    printf("Digite a medida da glicose(mg/dl): ");
    scanf("%lf", &medida);
    
    if(medida <= 100){
        printf("Classificacao: normal");
    }else if(medida > 100 && medida <= 140){
        printf("Classificacao: elevado");
    }else{
        printf("Classificacao: diabetes");
    }
    return 0;
}
