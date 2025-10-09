#include<stdio.h>
int main()
{
  float a,b,c,d;

  printf("a : ");
  scanf("%f",&a);
  printf("b : ");
  scanf("%f",&b);
  printf("c : ");
  scanf("%f",&c);
  printf("d : ");
  scanf("%f",&d);

  float x = (a+b)*(c/d);
  float y = (a+b)*c/d;
  float z = a+(b*c)/d;

  printf("1st expresion : %.2f \n",x);
  printf("2nd expresion : %.2f \n",y);
  printf("3rd expresion : %.2f \n",z);

  return 0;
}