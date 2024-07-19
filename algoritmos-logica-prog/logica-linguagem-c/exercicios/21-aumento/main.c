#include <stdio.h>

int main()
{
    double salario, aumento, novoSalario, aumentoTotal;
    int porcentagem;
    printf("Digite o salario da pessoa: ");
    scanf("%lf", &salario);
    
    if(salario <= 1000){
        aumento = (double )20 / 100;
    }else if(salario <= 3000){
        aumento = (double) 15 / 100;
    }else if(salario <= 8000){
        aumento = (double) 10 / 100;
    }else{
        aumento = (double) 5 / 100;
    }
    
    aumentoTotal = salario * aumento;
    novoSalario = salario + aumentoTotal;
    porcentagem = aumento * 100;
    
    printf("Novo salario = R$ %.2lf\n", novoSalario);
    printf("Aumento = R$ %.2lf\n", aumentoTotal);
    printf("Porcentagem = %d%%", porcentagem);
    return 0;
}
