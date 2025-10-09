#include<stdio.h>
int main()
{
  int total_days, years, weeks;

  printf("Enter a number of days : ");
  scanf("%d",&total_days);

  years = total_days / 365;
  weeks = total_days / 7;

  printf("Years = %d \nWeeks = %d \nDays = %d \n",years,weeks,total_days);


  return 0;
}