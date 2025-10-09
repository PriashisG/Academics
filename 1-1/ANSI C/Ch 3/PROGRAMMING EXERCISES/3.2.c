#include<stdio.h>
int main()
{
  float rice, sugar;

  printf("Enter the value of rice : ");
  scanf("%f",&rice);
  printf("Enter the value of sugar : ");
  scanf("%f",&sugar);

  printf("\n\t******* LIST OF ITEMS *******\n");
  printf("\t\tItem \t Price \n");
  printf("\t\tRice \t Rs %.2f \n",rice);
  printf("\t\tSugar \t Rs %.2f \n",sugar);

  return 0;
}