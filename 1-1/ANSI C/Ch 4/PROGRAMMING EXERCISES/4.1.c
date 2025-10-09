#include <stdio.h>
int main()
{
  float num_float;
  int num_int_part;

  printf("Enter a floating number : ");
  scanf("%f", &num_float);

  num_int_part = num_float;

  while (num_int_part>9)
  {
    num_int_part = num_int_part /10;
     
  }
  
  printf("\t****** The right-most digit of the integral part of the number is %d ******\n",num_int_part);

  return 0;
}