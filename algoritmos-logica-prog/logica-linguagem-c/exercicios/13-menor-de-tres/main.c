#include <stdio.h>

int main()
{
    int x1, x2, x3, menor;
    
    printf("Primeiro valor: ");
    scanf("%d", &x1);
    printf("Segundo valor: ");
    scanf("%d", &x2);
    printf("Terceiro valor: ");
    scanf("%d", &x3);

    menor = x1;
    if(x2 < x1 && x2 <= x3){
        printf("Menor = %d", x2);
    }else if(x3 < x1){
        printf("Menor = %d", x3);
    }else{
        printf("Menor = %d", x1);
    }
    return 0;
}
