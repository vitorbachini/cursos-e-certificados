#include <iostream>
#include <iomanip> /** Biblioteca para formatar o numero de casas decimais **/
#include <string> /** Biblioteca para utilizar funções de manipulação de texto **/

using namespace std;

int main()
{
    int idade;
    double altura, salario;
    char genero;
    string nome;
    
    idade = 20;
    salario = 5800;
    altura = 1.84;
    genero = 'M';
    nome = "Everton Galdino";
    
    cout << fixed << setprecision(2); /** Fixar o número de casas decimais **/
    cout << "Idade = " << idade << endl; /** Impressão de dados na tela **/
    cout << "Salario = " << salario << endl;
    cout << "Altura = " << altura << endl;
    cout << "Genero = " << genero << endl;
    cout << "Nome = " << nome << endl;

    return 0;
}