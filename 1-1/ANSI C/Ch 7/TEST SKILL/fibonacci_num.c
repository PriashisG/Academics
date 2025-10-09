#include<stdio.h>
int main()
{
  int fib=0,n,num_1=0,num_2=1;

  printf("Enter a value of n : ");
  scanf("%d",&n);

  for (int i=0; i<=n-2; i++)
  {
    fib = num_1 + num_2;
    num_1 = num_2 ; 
    num_2 = fib ;
    printf("%d, ",fib);
  }
  printf("\n");


  return 0;
}