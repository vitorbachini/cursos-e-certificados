#include <stdio.h>

int main()
{
    int x = 5;
    double y = 2 * x;
    printf("%d\n", x);
    printf("%.1lf\n", y);
    
    double b1 = 6.0;
    double b2 = 8.0;
    double h = 5.0;
    double area = (b1 + b2) / 2.0 * h;
    printf("%.2lf\n", area);
    
    int a, b;
    double resultado;
    a = 5;
    b = 2;
    resultado = (double) a / b;
    printf("%.2lf\n", resultado);

    return 0;
}
