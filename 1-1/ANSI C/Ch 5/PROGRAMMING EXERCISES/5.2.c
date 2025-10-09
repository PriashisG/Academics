#include<stdio.h>
int main()
{
  int x,y;
  float a,b,c;

  printf("x : ");
  scanf("%d",&x);
  printf("y : ");
  scanf("%d",&y);

  if (x!=y)
  {
    a = (x+y) / (x-y);
    b = (x+y) /2;
    c = (x+y)*(x-y);
    printf("\n(a) %.2f \t (b) %.2f \t (c) %.2f \n",a,b,c);
  }
  else
  {printf("x-y=0; that's not valid.\n");}
  

  return 0;
}