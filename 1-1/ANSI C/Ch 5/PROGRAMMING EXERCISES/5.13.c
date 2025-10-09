#include<stdio.h>
int main()
{
  float dollar,euro,rupee;

  printf("Enter a amount of money in dollar : ");
  scanf("%f",&dollar);

  euro = dollar * 0.92 ;
  rupee = dollar * 83.75 ; 

  printf("$%.2f Dollar equivalent to euro €%.2f \n",dollar,euro);
  printf("$%.2f Dollar equivalent to rupee ₹%.2f \n",dollar,rupee);


  return 0;
}