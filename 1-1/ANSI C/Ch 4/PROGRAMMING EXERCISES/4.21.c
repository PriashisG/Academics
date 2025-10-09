#include<stdio.h>
int main()
{
  int a,b;
  float x;

  printf("a : ");
  scanf("%d",&a);
  printf("b : ");
  scanf("%d",&b);

  x = (float) a / b ; 

  if ( b != 0 )
  {
    printf("The division is %.2f \n", x);
  }

  return 0;
}