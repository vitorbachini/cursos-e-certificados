#include <stdio.h>

int main()
{
    int N, maior;
    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);
    
    int mat[N][N];
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    printf("Maior elemento de cada linha: \n");
    for(int i = 0; i < N; i++){
        maior = 0;
        for(int j = 0; j < N; j++){
            if(mat[i][j] > maior){
                maior = mat[i][j];
            }
        }
        printf("%d\n", maior);
    }

    return 0;
}
