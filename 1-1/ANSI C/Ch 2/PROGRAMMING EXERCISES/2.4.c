#include<stdio.h>
int main()
{
  int x,a,b,c;

  // case - a
  a=250,b=85,c=25;
  x=a/(b-c);
  printf("(a) x = %d/(%d-%d) = %d \n",a,b,c,x);
  // case - b
  a=300,b=70,c=70;
  x=a/(b-c);
  printf("(b) x = %d/(%d-%d) = %d \n",a,b,c,x);

  return 0;
}