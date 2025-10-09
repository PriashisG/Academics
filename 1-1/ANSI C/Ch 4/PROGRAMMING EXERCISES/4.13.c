#include <stdio.h>
#include <math.h>
int main()
{
  int main_cost = 250, calls, total_customer;
  float each_call = 1.25, extra_bill = 0, total_cost = 0;

  printf("Enter total customer number : ");
  scanf("%d", &total_customer);

  for (int x = 1; x <= total_customer; x++)
  {
    printf("Enter total call number : ");
    scanf("%d", &calls);
    if (calls > 100)
    {
      extra_bill = 1.25 * (calls - 100);
    }
    else
    {
      extra_bill = 0;
    }

    total_cost = main_cost + extra_bill;

    printf("\t********* Total bill for customer 0%d = %.2f *********\n", x, total_cost);
  }

  return 0;
}