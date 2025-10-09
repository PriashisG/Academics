#include<stdio.h>
int main()
{
  int x,y;
  short int z;

  x=123456;
  y=654321;
  z=x+y;

  printf("X = %d , Y = %d \n",x,y);
  printf("Z = X + Y = %d + %d = %d \n",x,y,z);

  return 0;
}