#include <stdio.h>

int main()
{
    int x, soma;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    
    
    while(x != 0){
        soma = 0;
        if(x % 2 == 0){
            soma = x + (x +2) + (x + 4) + (x + 6) + (x + 8);
        }else{
            soma = (x + 1) + (x +3) + (x + 5) + (x + 7) + (x + 9);
        }
        printf("Soma = %d\n", soma);
        
        printf("Digite um numero inteiro: ");
        scanf("%d", &x);
    }

    
    return 0;
}
