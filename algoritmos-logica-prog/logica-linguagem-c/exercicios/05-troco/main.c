#include <stdio.h>

int main()
{
    
    double preco, qtd, dinheiro, troco;
    
    printf("Preço unitario do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%lf", &qtd);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);
    
    troco = dinheiro - (preco * qtd);
    printf("Troco = %.2lf", troco);

    return 0;
}
