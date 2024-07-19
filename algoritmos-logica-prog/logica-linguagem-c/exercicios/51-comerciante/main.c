#include <stdio.h>

void limpar_entrada(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF){}
}

void ler_texto(char *buffer, int lenght){
    fgets(buffer, lenght, stdin);
    strtok(buffer, "\n");
}

int main()
{
    int N, lucroBaixo, lucroMedio, lucroAlto;
    double lucro, totalCompra, totalVenda, lucroTotal;
    printf("Serao digitados dados de quantos produtos? ");
    scanf("%d", &N);

    char nomes[N][50];
    double compra[N];
    double venda[N];

    for (int i = 0; i < N; i++){
        printf("Produto %d: \n", i + 1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nomes[i], 50);
        printf("Preco de compra: ");
        scanf("%lf", &compra[i]);
        printf("Preco de venda: ");
        scanf("%lf", &venda[i]);
    }
    
    lucroBaixo = 0;
    lucroMedio = 0;
    lucroAlto = 0;
    for (int i = 0; i < N; i++){
        lucro = (venda[i] - compra[i]) / compra[i] * 100;
        if(lucro < 10){
            lucroBaixo = lucroBaixo + 1;
        }else if(lucro >= 10 && lucro <= 20){
            lucroMedio = lucroMedio + 1;
        }else{
            lucroAlto = lucroAlto + 1;
        }
    }
    
    totalCompra = 0;
    totalVenda = 0;
    for (int i = 0; i < N; i++){
        totalCompra = totalCompra + compra[i];
        totalVenda = totalVenda + venda[i];
    }
    lucroTotal = totalVenda - totalCompra;
    
    printf("Relatorio:\n");
    printf("Lucro abaixo de 10%%: %d\n", lucroBaixo);
    printf("Lucro entre 10%% e 20%%: %d\n", lucroMedio);
    printf("Lucro a cima de 20%%: %d\n", lucroAlto);
    printf("Valor total de compra: %.2lf\n", totalCompra);
    printf("Valor total de venda: %.2lf\n", totalVenda);
    printf("Lucro total: %.2lf\n", lucroTotal);
    return 0;
}
