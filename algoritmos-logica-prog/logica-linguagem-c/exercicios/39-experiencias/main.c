#include <stdio.h>

void limpar_entrada(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF){}
}

int main()
{
    int N, x, somaC, somaR, somaS, somaX;
    char tipo;
    double percentualC, percentualR, percentualS;
    printf("Quantos casos de teste serao digitados? ");
    scanf("%d", &N);

    somaC = 0;
    somaR = 0;
    somaS = 0;
    somaX = 0;
    for (int i = 0; i < N; i++){
        printf("Quantidade de cobaias: ");
        scanf("%d", &x);
        printf("Tipo de cobaia: ");
        limpar_entrada();
        scanf("%c", &tipo);
        
        if(tipo == 'C'){
            somaC = somaC + x;
        }else if(tipo == 'R'){
            somaR = somaR + x;
        }else if(tipo == 'S'){
            somaS = somaS + x;
        }
        
        somaX = somaX + x;
    }
    
    printf("\nRelatorio Final: \n");
    printf("Total: %d\n", somaX);
    printf("Total de coelhos: %d\n", somaC);
    printf("Total de ratos: %d\n", somaR);
    printf("Total de sapos: %d\n", somaS);
    
    percentualC = (double) somaC / somaX * 100;
    percentualR = (double) somaR / somaX * 100;
    percentualS = (double) somaS / somaX * 100;
    
    printf("Percentual de coelhos: %.2lf\n", percentualC);
    printf("Percentual de ratos: %.2lf\n", percentualR);
    printf("Percentual de sapos: %.2lf\n", percentualS);
    return 0;
}
