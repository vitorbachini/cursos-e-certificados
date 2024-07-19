#include <stdio.h>

int main()
{
    int N, soma;
    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);
    
    int mat[N][N];
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    soma = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i < j){
                soma = soma + mat[i][j];
            }
        }
    }
    
    printf("Soma da diagonal principal = %d", soma);
    return 0;
}
