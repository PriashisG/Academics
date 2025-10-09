#include<stdio.h>
int add(int x, int y);
int sub(int x, int y);

int main()
{
  int a=20,b=10,x,y;

  x = add(a,b);
  y = sub(a,b);

  printf("%d + %d = %d \n",a,b,x);
  printf("%d - %d = %d \n",a,b,y);

  return 0;
}

int add(int x, int y)
{
  return x+y;
}

int sub(int x, int y)
{
  return x-y;
}