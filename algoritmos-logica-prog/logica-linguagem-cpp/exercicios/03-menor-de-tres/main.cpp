#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n1, n2, n3, menor;
    
    cout << "Digite o primeiro valor: ";
    cin >> n1;
    cout << "Digite o segundo valor: ";
    cin >> n2;
    cout << "Digite o terceiro valor: ";
    cin >> n3;
    
    menor = n1;
    if(n2 < n1 && n2 < n3){
        menor = n2;
    } else if(n3 < n1){
        menor = n3;
    }

    cout << "Menor valor: " << menor;
    return 0;
}