#include <stdio.h>

int main()
{
    int N, fatorial;
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    
    fatorial = 1;
    for(int i = 1; i <= N; i++ ){
        fatorial = fatorial * i;
    }
    printf("Fatorial = %d", fatorial);

    return 0;
}
