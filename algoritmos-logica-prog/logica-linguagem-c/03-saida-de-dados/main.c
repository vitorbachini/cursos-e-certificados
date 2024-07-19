#include <stdio.h>

int
main ()
{

  int x = 10;
  double y = 20.5;

  printf ("%d\n", x);  /** placeholder int -> %d **/
  printf ("%.2lf\n", y);  /** placeholder double -> %lf -> %.2lf (duas casas decimais)**/

  int idade = 32;
  double salario = 4560.9;
  char nome[50] = "Maria Eduarda"; /** placeholder char(string) -> %s **/
  char sexo = 'F'; /** placeholder char -> %c **/
  
  printf("A funcionaria %s, sexo %c, ganha %.2lf reais e tem %d anos.", nome, sexo, salario, idade);


  return 0;
}
