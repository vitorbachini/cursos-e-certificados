#include <stdio.h>

int main()
{
    int N;
    double media, n1, n2, n3;
    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++){
        printf("Digite tres numeros: \n");
        scanf("%lf", &n1);
        scanf("%lf", &n2);
        scanf("%lf", &n3);
        media = (double) ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;
        printf("Media = %.1lf\n", media);
    }

    return 0;
}
