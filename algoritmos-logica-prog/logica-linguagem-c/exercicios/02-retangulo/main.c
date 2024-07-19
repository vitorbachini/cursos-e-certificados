#include <stdio.h>
#include <math.h>

int
main ()
{
  double b, h, area, perimetro, diagonal;

  printf ("Base do retangulo: ");
  scanf ("%lf", &b);
  printf ("Altura do retangulo: ");
  scanf ("%lf", &h);

  area = b * h;
  perimetro = 2 * (b + h);
  diagonal = sqrt(pow(b, 2.0) + pow(h, 2.0));
  
  printf ("Area = %.4lf\n", area);
  printf ("Perimetro = %.4lf\n", perimetro);
  printf ("Diagonal = %.4lf\n", diagonal);
  
  return 0;
}
