#include <stdio.h>

#define main_num 7

int main()
{
  int numbers, divided_by_7;

  printf("The numbers of divided by 7 are : ");
  for (numbers = 100; numbers <= 200; numbers++)
  {
    divided_by_7 = (numbers % 7) ? 0 : 1;
    if (divided_by_7 == 1)
    {
      printf("%d ", numbers);
    }
  }
  printf("\n");

  return 0;
}