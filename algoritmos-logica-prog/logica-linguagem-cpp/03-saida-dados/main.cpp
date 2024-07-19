#include <iostream>
#include <iomanip> 
#include <string> 

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
    
    cout << fixed << setprecision(2); 
    cout << "Idade = " << idade << endl; /* endl realiza a quebra de linha */
    cout << "Salario = " << salario << endl;
    cout << "Altura = " << altura << endl;
    cout << "Genero = " << genero << endl;
    cout << "Nome = " << nome << endl;

    cout << "O funcionario " << nome << ", do sexo " << genero << ", idade " 
         << idade << ", altura " << altura << "m, recebe " << salario << " reais.";

    return 0;
}