#include<stdio.h>
int main()
{
  float purchase_price, salage_value, depreciation;
  int years_of_service;

  printf("Enter Purchase Price : $ ");
  scanf("%f",&purchase_price);
  printf("Enter Salage Value : $ ");
  scanf("%f",&salage_value);
  printf("Enter Years of Service : ");
  scanf("%d",&years_of_service);

  depreciation = (purchase_price - salage_value ) / years_of_service ; 

  printf("\n\t******Yearly Depreciation = $%.4f ******\n",depreciation);

  return 0;
}