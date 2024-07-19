#include <stdio.h>

int main()
{
    int N, soma;
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);
    
    int vet[N];
    
    for(int i = 0; i < N; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }
    
    soma = 0;
    printf("Numeros pares: \n");
    for(int i = 0; i < N; i++){
        if(vet[i] % 2 == 0){
            printf("%d ", vet[i]);
            soma = soma + 1;
        }
    }
    printf("\nQuantidade de pares: %d", soma);

    return 0;
}
