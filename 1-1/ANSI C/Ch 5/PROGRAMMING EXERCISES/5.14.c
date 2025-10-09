#include <stdio.h>
int main()
{
  int col, row;

  for (col = 0; col <= 4; col++)
  {
    for (row = 0; row<col; row++)
    {
      printf(" ");
    }
    for (row = 5-col; row >= 1; row--)
    {
      printf("%d",row);
    }
    printf("\n");
  }

  return 0;
}