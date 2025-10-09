#include <stdio.h>
int main()
{
  int a = 45, b = 37;

  printf("\t\t\t  %d \n", a);
  printf("\t\tx\t  %d \n\t\t", b);
  for (int i = 0; i <= 14; i++)
  {
    printf("-");
    if (i == 14)
    {
      printf("\n");
    }
  }
  printf("\t7 x 45 is\t %d \n", (b % 10) * a);
  printf("\t3 x 45 is\t%d \n\t\t", (b / 10) * a * 10);
  for (int i = 0; i <= 14; i++)
  {
    printf("-");
    if (i == 14)
    {
      printf("\n");
    }
  }
  printf("\tAdd them\t%d \n\t\t", ((b % 10) * a) + ((b / 10) * a * 10));
  for (int i = 0; i <= 14; i++)
  {
    printf("-");
    if (i == 14)
    {
      printf("\n");
    }
  }

  return 0;
}