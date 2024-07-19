#include <stdio.h>

int main()
{
    int N;
    double soma, media;
    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &N);

    double vet[N];
    
    for(int i = 0; i < N; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }
    
    soma = 0;
    for(int i = 0; i < N; i++){
        soma = soma + vet[i];
    }
    
    media = (double) soma / N;
    printf("Media do vetor = %.3lf\n", media);
    
    printf("Elementos abaixo da media: \n");
    for(int i = 0; i < N; i++){
        if(vet[i] < media){
            printf("%.1lf\n", vet[i]);
        }
    }
    return 0;
}
