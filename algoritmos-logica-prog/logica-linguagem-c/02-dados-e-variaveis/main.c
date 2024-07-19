#include <stdio.h> /** para entrada e saída de dados **/
#include <string.h> /** manipulação de strings **/

int main()
{
    int idade;
    double salario, altura;
    char genero;
    char nome[50];
    
    idade = 20;
    salario = 1200;
    altura = 1.63;
    genero = 'F';
    strcpy(nome , "Maria Eduarda");
    
    printf("Idade = %d\n", idade);
    printf("Salario = %.2lf\n", salario);
    printf("Altura = %.2lf\n", altura);
    printf("Genero = %c\n", genero);
    printf("Nome = %s\n", nome);

    return 0;
}
