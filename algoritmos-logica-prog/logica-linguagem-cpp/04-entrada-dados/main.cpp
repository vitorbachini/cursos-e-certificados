#include <iostream>
#include <iomanip>
#include <string>
#include <climits> /** Biblioteca para utilizar o INT_MAX (limpeza de buffer) **/

using namespace std;

int main()
{
    double salario1, salario2;
    string nome1, nome2;
    int idade;
    char sexo;
    
    cout << "Nome da primeira pessoa: ";
    getline(cin, nome1); /** Entrada de dados utilizando uma string **/
    cout << "Salario da primeira pessoa: ";
    cin >> salario1; /** Entrada de dados padrão **/
    
    cout << "Nome da segunda pessoa: ";
    cin.ignore(INT_MAX, '\n'); /** Limpeza de buffer **/
    getline(cin, nome2); 
    cout << "Salario da segunda pessoa: ";
    cin >> salario2; 
    
    cout << "Digite uma idade: ";
    cin >> idade;
    cout << "Digite um sexo (M/F): ";
    cin >> sexo;
    
    cout << fixed << setprecision(2);
    cout << "Nome1: " << nome1 << endl;
    cout << "Salario1: " << salario1 << endl;
    cout << "Nome2: " << nome2 << endl;
    cout << "Salario2: " << salario2 << endl;
    cout << "Idade: " << idade << endl;
    cout << "Sexo: " << sexo << endl;
    return 0;
}