#include <stdio.h>

int main()
{
  int x = 20;
  do
  {
    printf("%d =>", x);
    x /= 2;
  } while (x >= 0);

  return 0;
}