#include <stdio.h>
int main()
{
  float num_float;
  int num_int_part;

  printf("Enter a floating number : ");
  scanf("%f", &num_float);

  num_int_part = num_float;

  while (num_int_part>99)
  {
    num_int_part = num_int_part /10;
     
  }
  
  printf("\n\t****** The two right-most digit of the integral part of the number is %d ******\n\n",num_int_part);

  return 0;
}