#include <stdio.h>

int main()
{
    int N, i, j;
    
    
    printf("Qual e a ordem da matriz? ");
    scanf("%d", &N);
    
    int mat[N][N];
    
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    printf("\nDiagonal principal: \n");
    for(i = 0; i < N; i++){
        printf("%d ", mat[i][i]);
    }
    
    int cont = 0;
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(mat[i][j] < 0){
                cont++;
            }
        }
    }
    printf("\nQuantidade de negativos: %d", cont);
    return 0;
}
