#include<stdio.h>
#include<math.h>
int main()
{
  int a,b;

  printf("Enter a int value : ");
  scanf("%d",&a);

  b = pow(a,2);
  printf("Square of %d is %d \n",a,b);

  return 0;
}