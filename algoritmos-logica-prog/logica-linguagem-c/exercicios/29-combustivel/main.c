#include <stdio.h>

int main()
{
    int N, somaAlcool, somaDiesel, somaGas;
    printf("Informe um codigo(1, 2, 3) ou 4 para parar: ");
    scanf("%d", &N);
    
    somaAlcool = 0;
    somaDiesel = 0;
    somaGas = 0;
    while(N != 4){
        if(N == 1){
            somaAlcool = somaAlcool + 1;
        }else if (N == 2){
            somaGas = somaGas + 1;
        }else if(N == 3){
            somaDiesel = somaDiesel + 1;
        }
        printf("Informe um codigo(1, 2, 3) ou 4 para parar: ");
        scanf("%d", &N);
    }
    printf("Muito obrigado!\n");
    printf("Alcool: %d\n", somaAlcool);
    printf("Gasolina: %d\n", somaGas);
    printf("Diesel: %d\n", somaDiesel);

    return 0;
}
