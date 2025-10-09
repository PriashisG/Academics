#include<stdio.h>
int main()
{
  float number;
  int s_int, l_int;

  printf("Enter a floating number : ");
  scanf("%f",&number);

  s_int = (int) number;
  l_int = s_int + 1 ;

  printf("\n\t****** %d \t %.4f \t %d ******\n",s_int,number,l_int);



  return 0;
}