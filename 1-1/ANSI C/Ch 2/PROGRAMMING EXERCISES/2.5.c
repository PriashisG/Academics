#include<stdio.h>
int main()
{
  int v,s,t;

  // distance
  printf("Enter the distance the car travled : ");
  scanf("%d",&s);
  // time
  printf("Enter the time the car travled : ");
  scanf("%d",&t);
  // velocity
  v=s/t;
  printf("The speed of the car = %d m/s \n",v);

  return 0;
}