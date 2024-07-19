#include <stdio.h>

int main()
{
    int N, x, somaDentro, somaFora;
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    somaFora = 0;
    somaDentro = 0;
    for(int i = 0; i < N; i++){
        printf("Digite um numero: ");
        scanf("%d", &x);
        if(x >= 10 && x <= 20){
            somaDentro = somaDentro + 1;
        }else{
            somaFora = somaFora + 1;
        }
    }
    printf("Dentro: %d\n", somaDentro);
    printf("Fora: %d\n", somaFora);
    return 0;
}
