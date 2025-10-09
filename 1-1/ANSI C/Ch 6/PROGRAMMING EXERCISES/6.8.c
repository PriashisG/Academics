#include <stdio.h>
int main()
{
  float discount, price, final_price;
  int type;

  printf("Enter the value of the product : ");
  scanf("%f", &price);
  printf("Enter the type of the product (type 1 for MILL CLOTH & type 2 for HAND-MADE) : ");
  scanf("%d", &type);

  switch (type)
  {
  case 1:
    if (price < 100)
    {
      discount = 0;
    }
    else if (price < 200)
    {
      discount = .05;
    }
    else if (price < 300)
    {
      discount = .075;
    }
    else if (price > 300)
    {
      discount = .1;
    }
    else
    {
      printf("Price cannot be negative. \n");
    }
    break;
  case 2:
    if (price < 100)
    {
      discount = .05;
    }
    else if (price < 200)
    {
      discount = .075;
    }
    else if (price < 300)
    {
      discount = .1;
    }
    else if (price > 300)
    {
      discount = .15;
    }
    else
    {
      printf("Price cannot be negative. \n");
    }
    break;
  default:
    printf("Invalid type input.\n");
    break;
  }

  final_price = price + price * discount;

  printf("\n\t******* THE PRODUCT PRICE IS %.2f WITH DISCOUNT OF %.1f ****** \n", final_price, discount * 100);

  return 0;
}