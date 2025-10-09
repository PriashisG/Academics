#include<stdio.h>
int main()
{
  int x,y,sum,sub,multi;
  float div;

  printf("x : ");
  scanf("%d",&x);
  printf("y : ");
  scanf("%d",&y);

  sum=x+y;
  if (x>y)
  {
    sub=x-y;
  }
  else
  {
    sub=y-x;
  }
  multi=x*y;
  if (y==0)
  {
    printf("Invalid input. y doesn't be zero.");
  }
  else
  {
    div=x/y;
  }

  printf("\n\n\t********** x \t\t = %d \t y =\t\t %d ********** \n",x,y);
  printf("\t********** sum \t\t = %d \t Difference =\t %d ********** \n",x,y);
  printf("\t********** Product \t = %d \t Division =\t %d ********** \n",x,y);


  return 0;
}