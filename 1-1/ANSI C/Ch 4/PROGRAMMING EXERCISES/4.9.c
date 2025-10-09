#include<stdio.h>
int main()
{
  int num, rem, sum=0;

  printf("Enter a int number : ");
  scanf("%d",&num);

  while (num != 0)
  {
    rem = num % 10;
    num /= 10 ;
    sum +=rem;
  }

  printf("\n\t******** Sum of all digits is %d ******** \n",sum);


  return 0;
}