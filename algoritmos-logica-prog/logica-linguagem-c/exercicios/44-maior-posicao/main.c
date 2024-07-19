#include <stdio.h>

int main()
{
    int N, posicao;
    double maior;
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);
    
    double vet[N];
    
    maior = 0;
    for (int i = 0; i < N; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
        
        if(vet[i] > maior){
            maior = vet[i];
            posicao = i;
        }
    }
    
    printf("Maior valor = %.1lf\n", maior);
    printf("Posicao do maior valor = %d", posicao);
    return 0;
}
