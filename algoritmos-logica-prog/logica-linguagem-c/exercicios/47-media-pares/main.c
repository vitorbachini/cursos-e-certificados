#include <stdio.h>

int main()
{
    int N, soma, pares;
    double media;
    printf("Quantos elementos vai ter o vetor: ");
    scanf("%d", &N);
    
    int vet[N];

    for (int i = 0; i < N; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }
    
    soma = 0;
    pares = 0;
    for (int i = 0; i < N; i++){
        if(vet[i] % 2 == 0){
            soma = soma + vet[i];
            pares = pares + 1;
        }
    }
    
    if(pares == 0){
        printf("Nenhum numero par!");
    }else{
        media = (double) soma / pares;
        printf("Media dos pares = %.1lf", media);
    }
    
    return 0;
}
