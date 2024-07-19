#include <stdio.h>

int main()
{
    int N, n, d;
    double divisao;
    printf("Quantos casos voce vai digtar? ");
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++){
        printf("Entre com o numerador: ");
        scanf("%d", &n);
        printf("Entre com o denominador: ");
        scanf("%d", &d);
        if(d == 0){
            printf("Divisao impossivel!\n");
        }else{
           divisao = (double) n / d;
        printf("Divisao = %.2lf\n", divisao); 
        }
        
    }

    return 0;
}
