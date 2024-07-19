#include <stdio.h>

int main()
{
    int N, x;
    printf("Quantos numero voce vai digitar? ");
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++){
        printf("Digite um numero: ");
        scanf("%d", &x);
        if(x > 0 && x % 2 == 0){
            printf("Par Positivo.\n");
        }else if(x < 0 && x % 2 == 0){
            printf("Par Negativo.\n");
        }else if(x > 0 && x % 2 != 0){
            printf("Impar Positivo.\n");
        }else if(x < 0 && x % 2 != 0){
            printf("Impar Negativo.\n");
        }else if(x == 0){
            printf("Nulo.\n");
        }
    }

    return 0;
}
