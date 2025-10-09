#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c;
  float A,S;

  printf("a : ");
  scanf("%d",&a);
  printf("b : ");
  scanf("%d",&b);
  printf("c : ");
  scanf("%d",&c);

  S=(a+b+c)/2;
  A=pow(S*(S-a)*(S-b)*(S-c),.5);

  printf("\n****** The area of the triangle = %.2f ****** \n",A);
  return 0;
}