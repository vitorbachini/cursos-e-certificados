#include <stdio.h>
#include <string.h>

void limpar_entrada(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF){}
} /** Função para realizar a limpeza da entrada de dados **/

void ler_texto(char *buffer, int lenght){
    fgets(buffer, lenght, stdin);
    strtok(buffer, "\n");
}

int main()
{
    int idade;
    double salario, altura;
    char genero;
    char nome[50];
    
    printf("Digite o valor da idade: ");
    scanf("%d", &idade); /** Entrada de dados -> utilizar o placeholder e também o endereço na memória(&) **/
    printf("Digite o valor do salario: ");
    scanf("%lf", &salario);
    printf("Digite o valor da altura: ");
    scanf("%lf", &altura);
    printf("Digite o genero: ");
    limpar_entrada();
    scanf("%c", &genero);
    printf("Digite o nome da pessoa: ");
    limpar_entrada();
    ler_texto(nome, 50); /** Quando utilizamos o %s, ou seja, um vetor de caracter, ele já é uma referência na memória **/
    
    
    printf("Idade = %d\n", idade);
    printf("Salario = %.4lf\n", salario);
    printf("Altura = %.2lf\n", altura);
    printf("Genero = %c\n", genero);
    printf("Nome = %s\n", nome);

    return 0;
}