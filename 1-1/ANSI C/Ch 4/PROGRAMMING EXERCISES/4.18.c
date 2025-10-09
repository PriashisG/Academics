#include<stdio.h>
int main()
{
  int a,b,c;
  float x;

  printf("Enter value of a : ");
  scanf("%d",&a);
  printf("Enter value of b : ");
  scanf("%d",&b);
  printf("Enter value of c : ");
  scanf("%d",&c);

  x=a-b/3+c*2-1;

  printf("\n\tthe value of x is = %.2f\n\n",x);

  return 0;

}