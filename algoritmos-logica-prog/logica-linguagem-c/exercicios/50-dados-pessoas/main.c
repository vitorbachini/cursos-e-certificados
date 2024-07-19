#include <stdio.h>

void limpar_entrada(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF){}
}

int main()
{
    int N, contMulheres, contHomens;
    double maior, menor, somaAltura, media;
    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);
    
    double alturas[N];
    char generos[N];
    
    for (int i = 0; i < N; i++){
        printf("Altura da %da pessoa: ", i + 1);
        scanf("%lf", &alturas[i]);
        printf("Genero da %da pessoa: ", i + 1);
        limpar_entrada();
        scanf("%c", &generos[i]);
    }

    maior = 0;
    menor = 3;
    for (int i = 0; i < N; i++){
        if(alturas[i] > maior){
            maior = alturas[i];
        }
        
        if(alturas[i] < menor){
            menor = alturas[i];
        }
    }

    printf("Menor altura = %.2lf\n", menor);
    printf("Maior altura = %.2lf\n", maior);
    
    somaAltura = 0;
    contMulheres = 0;
    for (int i = 0; i < N; i++){
        if(generos[i] == 'F'){
            somaAltura = somaAltura + alturas[i];
            contMulheres = contMulheres + 1;
        }
    }
    media = (double) somaAltura / contMulheres;
    printf("Altura media das mulheres = %.2lf\n", media);
    
    contHomens = 0;
    for (int i = 0; i < N; i++){
        if(generos[i] == 'M'){
            contHomens = contHomens + 1;
        }
    }
    printf("Numero de homens = %d", contHomens);
    
    return 0;
}
