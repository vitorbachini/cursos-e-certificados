#include <stdio.h>

int main()
{
    
    double preco, qtd, dinheiro, troco, falta;
    
    printf("Preço unitario do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%lf", &qtd);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);
    
    troco = dinheiro - (preco * qtd);
    if((preco * qtd) > dinheiro){
        falta = (preco * qtd) - dinheiro;
        printf("Dinheiro insuficiente. Faltam %.2lf reais", falta);
    }else{
        printf("Troco = %.2lf", troco);
    }
    

    return 0;
}
