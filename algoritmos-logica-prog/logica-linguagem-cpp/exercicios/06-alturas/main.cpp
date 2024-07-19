#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, i;
    
    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    double vet[N];
    string nomes[N];
    int idades[N];
    double alturas[N];
    
    for(i = 0; i < N; i++){
        cout << "Digite os dados da " << i + 1 << "a pessoa" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
        cout << "Altura: ";
        cin >> alturas[i];
    }
    
    double somaAlturas = 0;
    for(i = 0; i < N; i++){
        somaAlturas = somaAlturas + alturas[i];
    }
    double mediaAltura = (double) somaAlturas / N;
    cout << fixed << setprecision(2);
    cout << "Altura media = " << mediaAltura << endl;
    
    int cont = 0;
    for(i = 0; i < N; i++){
        if(idades[i] < 16){
            cont = cont + 1;
        }
    }
    double menores = (double) cont / N;
    cout << "Pessoas com menos de 16 anos: " << menores * 100 << "%" << endl;
   
   for(i = 0; i < N; i++){
        if(idades[i] < 16){
            cout << nomes[i] << endl;
        }
    }
    return 0;
}
