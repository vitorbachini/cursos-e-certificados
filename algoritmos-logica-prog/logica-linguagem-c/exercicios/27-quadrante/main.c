#include <stdio.h>

int main()
{
    int x, y;
    printf("Digite o valor das coordenadas X e Y: \n");
    scanf("%d", &x);
    scanf("%d", &y);
    
    while(x != 0 && y != 0){
        if(x > 0 && y > 0){
            printf("Quadrante Q1");
        }else if(x < 0 && y > 0){
            printf("Quadrante Q2");
        }else if(x < 0 && y < 0){
            printf("Quadrante Q3");
        }else{
            printf("Quadrante Q4");
        }
        printf("\nDigite o valor das coordenadas X e Y: \n");
        scanf("%d", &x);
        scanf("%d", &y);
    }
    
    return 0;
}
