#include <stdio.h>

int main()
{
    int codigo, qtd;
    double preco, valor;
    printf("Codigo do produto comprado: ");
    scanf("%d", &codigo);
    printf("Quantidade comprada: ");
    scanf("%d", &qtd);
    
    if(codigo == 1){
        preco = 5.0;
    }else if(codigo == 2){
        preco = 3.50;
    }else if(codigo == 3){
        preco = 4.80;
    }else if(codigo == 4){
        preco = 8.90;
    }else if(codigo == 5){
        preco = 7.32;
    }else{
        printf("Erro. Produto nao existente.");
    }
    
    valor = preco * qtd;
    printf("Valor a pagar: %.2lf", valor);
    

    return 0;
}
