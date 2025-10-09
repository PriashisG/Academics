#include <stdio.h>
int main(void)
{
  for (int i = 1; i < 6; i++)
  {
    for (int j = 0; j < i; j++)
    {
      printf("%d", i);
    }
    printf("\n");
  }

  printf("\n");

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < i; j++)
    {
      printf(" ");
    }
    for (int j = i; j < 5; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}
