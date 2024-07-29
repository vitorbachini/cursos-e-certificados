#include <stdio.h>

int potencia(int base, int expoente){
    
 if(expoente==1){
    return base;
 }
 return base*potencia(base, expoente-1);
} /* Função recursiva */

int main()
{
    int value = potencia(2,4);
    printf("%d", value);
    

    return 0;
}
