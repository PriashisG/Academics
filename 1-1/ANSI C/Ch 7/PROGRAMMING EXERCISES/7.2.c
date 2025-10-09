#include<stdio.h>
int main()
{
  int number, remainder, sum=0 ;
  printf("Enter a integer: ");
  scanf("%d",&number);

  while(number !=0){
    remainder= number%10;
    number =number/10;
    sum += remainder;
  }

  printf("Sum of all digits = %d \n",sum);
  return 0;
}