#include<stdio.h>
int main()
{
  float distance, fuel, mileage;

  printf("Enter the distance : ");
  scanf("%f",&distance);
  
  printf("Enter the fuel : ");
  scanf("%f",&fuel);
  
  mileage = distance / fuel;

  printf("\t****** The mileage is %.2f km per liter ******\n",mileage);

  return 0;
}