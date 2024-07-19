#include <stdio.h>

int main()
{
    double a, b, c, areaQuadrado, areaTriangulo, areaTrapezio;
    
    
    printf("Digite a medida A: ");
    scanf("%lf", &a);
    printf("Digite a medida B: ");
    scanf("%lf", &b);
    printf("Digite a medida C: ");
    scanf("%lf", &c);
    
    areaQuadrado = a * a;
    areaTriangulo = (a * b) / 2;
    areaTrapezio = (a + b) * c / 2;
    
    printf("Area do Quadrado = %.2lf\n", areaQuadrado);
    printf("Area do Triangulo = %.2lf\n", areaTriangulo);
    printf("Area do Trapezio = %.2lf\n", areaTrapezio);
    return 0;
}
