#include <stdio.h>
#include <string.h>

void ler_texto(char *buffer, int lenght){
    fgets(buffer, lenght, stdin);
    strtok(buffer, "\n");
}

int main()
{
    char nome[50];
    double valorHora, horasTrabalhadas, total;
    
    printf("Nome: ");
    ler_texto(nome, 50);
    printf("Valor por hora: ");
    scanf("%lf", &valorHora);
    printf("Horas trabalhadas: ");
    scanf("%lf", &horasTrabalhadas);
    
    total = valorHora * horasTrabalhadas;
    printf("O pagamento para %s deve ser de %.2lf reais.", nome, total);

    return 0;
}
