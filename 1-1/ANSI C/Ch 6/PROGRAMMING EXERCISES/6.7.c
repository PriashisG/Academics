#include <stdio.h>
int main()
{
  int num = 1, n;

  printf("Enter a value of n : ");
  scanf("%d", &n);

  for (int col = 1; col <= n; col++)
  {
    for (int row = 1; row <= col; row++)
    {
      printf("%-3d ", num);
      num++;
    }
    printf("\n");
  }
  printf("\n");

  num = 1;

  for (int col = 1; col <= n; col++)
  {
    if (col % 2 == 0)
    {
      num = 0;
    }
    else
    {
      num = 1;
    }
    for (int row = 1; row <= col; row++)
    {
      printf("%-3d ", num);
      if (num == 1)
      {
        num -= 1;
      }
      else
      {
        num += 1;
      }
    }
    printf("\n");
  }

  return 0;
}