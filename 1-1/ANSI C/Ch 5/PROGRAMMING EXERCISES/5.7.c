#include <stdio.h>
int main()
{
  double x = 10.45678;

  printf("the number is %f \n", x);
  printf("(a) %.2e \n", x);
  printf("(b) %.4e \n", x);
  printf("(c) %.8e \n", x);

  return 0;
}