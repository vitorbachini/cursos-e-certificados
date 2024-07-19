#include <stdio.h>

int main()
{
    int L, C, i, j;
    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d", &L);
    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%d", &C);
    
    double mat[L][C];
    
    for(i = 0; i < L; i++){
        printf("Digite os elementos da %da linha: \n", i+1);
        for(j = 0; j < C; j++){
            scanf("%lf", &mat[i][j]);
        }
        
    }
    
    printf("Vetor Gerado: \n");
    for(i = 0; i < L; i++){
        double somaL = 0;
            for(j = 0; j < C; j++){
            somaL = somaL + mat[i][j];
        }
        printf("%.2lf\n", somaL);
    }
    return 0;
}
