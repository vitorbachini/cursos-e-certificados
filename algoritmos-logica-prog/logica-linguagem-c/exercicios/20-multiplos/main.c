#include <stdio.h>

int main()
{
    int x, y, troca;
    printf("Digite dois numeros inteiros: \n");
    scanf("%d", &x);
    scanf("%d", &y);
    
    if(y > x){
        troca = y;
        y = x;
        x = troca;
    }
    
    if(x % y == 0){
        printf("Sao multiplos.");
    }else{
        printf("Nao sao multiplos.");
    }
    
    return 0;
}
