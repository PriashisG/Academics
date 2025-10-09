#include <stdio.h>
#include <math.h>

void lines();

int main()
{
  double n_neg;
  long int n_pos;
  int n;

  lines();
  printf("\t2 to power n \t\t n \t\t 2 to power -n \n");
  lines();
  for (n = 0; n < 21; n++)
  {
    n_pos = pow(2, n);
    n_neg = pow(2, -n);
    printf("\t%10ld \t\t %3d \t\t %10.12f \n", n_pos, n, n_neg);
  }
  lines();
}
void lines()
{
  for (int i = 1; i < 75; i++)
  {
    printf("-");
  }
  printf("\n");
}