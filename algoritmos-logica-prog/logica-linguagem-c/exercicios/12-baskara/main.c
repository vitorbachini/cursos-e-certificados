#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, x1, x2, delta;
    
    printf("Coeficiente A: ");
    scanf("%lf", &a);
    printf("Coeficiente B: ");
    scanf("%lf", &b);
    printf("Coeficiente C: ");
    scanf("%lf", &c);
    
    delta = pow(b, 2.0) - 4 * a * c;
    if(delta < 0 ){
        printf("Esta equacao nao possui raizes reais.");
    }else{
    x1 = (double) (-b + sqrt(delta)) / (2 * a); 
    x2 = (double) (-b - sqrt(delta)) / (2 * a);
    
    printf("X1 = %.4lf\n", x1);
    printf("X2 = %.4lf", x2);
    }
    return 0;
}
