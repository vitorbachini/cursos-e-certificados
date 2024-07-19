#include <stdio.h>

int main()
{
    int i, N, multi;
    
    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &N);
    
    for(i = 1; i < 11; i++){
        multi = N * i;
        printf("%d x %d = %d\n", N, i, multi);
    }
    

    return 0;
}
