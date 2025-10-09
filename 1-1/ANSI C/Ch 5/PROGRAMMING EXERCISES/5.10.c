#include <stdio.h>
int main()
{
  char a_name[] = "Fan", b_name[] = "Motor";
  long int a_code = 67831, b_code = 450;
  float a_price = 1234.50, b_price = 5786.70;

  printf("\t Name \t Code \t Price \n");
  printf("\t %-s \t %-ld\t%.2f \n", a_name, a_code, a_price);
  printf("\t %-s \t %-ld\t%.2f \n", b_name, b_code, b_price);

  return 0;
}