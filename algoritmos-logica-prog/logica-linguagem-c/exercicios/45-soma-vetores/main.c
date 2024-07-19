#include <stdio.h>

int main()
{
    int N;
    printf("Quantos valores vai ter cada vetor? ");
    scanf("%d", &N);
    
    int vetA[N];
    int vetB[N];
    int vetC[N];
    
    printf("Digite o valores do vetor A: \n");
    for(int i = 0; i < N; i++){
        scanf("%d", &vetA[i]);
    }
    
    printf("Digite o valores do vetor B: \n");
    for(int i = 0; i < N; i++){
        scanf("%d", &vetB[i]);
    }

    for(int i = 0; i < N; i++){
        vetC[i] = vetA[i] + vetB[i];
    }
    
    printf("Vetor resultante: \n");
    for(int i = 0; i < N; i++){
        printf("%d\n", vetC[i]);
    }
    return 0;
}
