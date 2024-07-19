#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double b, h, area, perimetro, diagonal;
    
    cout << "Base do retangulo: ";
    cin >> b;
    cout << "Altura do retangulo: ";
    cin >> h;
    
    area = b * h;
    perimetro = 2 * (b + h);
    diagonal = sqrt(pow(b, 2.0) + pow(h, 2.0));

    cout << fixed << setprecision(4);
    cout << "Area = " << area << endl;
    cout << "Perimetro = " << perimetro << endl;
    cout << "Diagonal = " << diagonal << endl;
    return 0;
}