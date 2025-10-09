#include<stdio.h>
int main()
{
  int i=1, m,factorial=1;

  printf("Enter a value of m : ");
  scanf("%d",&m);

  while (i<=m)
  {
    factorial *= i;
    i++;
  }

  printf("\t**** %d! = %d ****\n",m,factorial);

  return 0;
}