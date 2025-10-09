#include <stdio.h>
#include <math.h>

float sq_root(float x);
void lines();

int main()
{
  float num_col, num_row, root;

  printf("\t\t\t\t Square Root Table\n");
  lines();

  for (num_col = 0; num_col <= 9; num_col++)
  {
    if (num_col == 0)
    {
      printf("\tNumbers \t |");
      for (num_row = .1; num_row < 1; num_row += 0.1)
      {
        printf("\t%5.1f \t |", num_row);
      }
    }
    printf("\n");
    lines();
    printf("\t%5.1f \t |", num_col);
    for (num_row = num_col + 0.1; num_row <= (num_col + 1); num_row = num_row + 0.1)
    {
      if (num_row == 1 || num_row == 2 || num_row == 3 || num_row == 4 || num_row == 5 || num_row == 6 || num_row == 7 || num_row == 8 || num_row == 9)
      {
        continue;
      }
      // root = sq_root(num_row + num_col);
      printf("%5.1f \t |", num_row);
    }
  }
  printf("\n");

  return 0;
}
float sq_root(float x)
{
  return pow(x, .5);
}
void lines()
{
  for (int i = 0; i < 170; i++)
  {
    printf("-");
  }
  printf("\n");
}