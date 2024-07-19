#include <stdio.h>
#include <math.h>

int main()
{
    int N, somaPositivos, L, C;
    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);
    
    double mat[N][N];
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%lf", &mat[i][j]);
        }
    }
    
    somaPositivos = 0;
     for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(mat[i][j] > 0){
                somaPositivos = somaPositivos + mat[i][j];
            }
        }
    }
    printf("\nSoma dos positivos: %d\n", somaPositivos);
    
    printf("\nEscolha uma linha: ");
    scanf("%d", &L);
    printf("Linha escolhida: ");
    for(int i = L; i <= L; i++){
        for(int j = 0; j < N; j++){
            printf("%.1lf  ", mat[i][j]);
        }
    }

    printf("\nEscolha uma coluna: ");
    scanf("%d", &C);
    printf("Coluna escolhida: ");
    for(int i = 0; i < N; i++){
        for(int j = C; j <= C; j++){
            printf("%.1lf  ", mat[i][j]);
        }
    }
    
    printf("\nDiagonal principal: ");
    for(int i = 0; i < N; i++){
        printf("%.1lf  ", mat[i][i]);
    }
    
    printf("\nMatriz alterada: \n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(mat[i][j] < 0){
                mat[i][j] = pow(mat[i][j], 2.0);
            }
            printf("%.1lf  ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
