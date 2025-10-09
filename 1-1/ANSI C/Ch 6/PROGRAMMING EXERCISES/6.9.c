#include <stdio.h>
int main()
{
  int x, y_a, y_b, y_c;

  printf("Enter the value of x : ");
  scanf("%d",&x);

  // (a)
  if (x<=0)
  {
    if (x<0)
    {
      y_a=1;
    }
    else
    {
      y_a=0;
    }
  }
  else
  {
    y_a=-1;
  }
  printf("\t(a)** y=%d **\n", y_a);

  // (b)
  if (x < 0)
  {
    y_b = 1;
  }
  else if (x == 0)
  {
    y_b = 0;
  }
  else
  {
    y_b = -1;
  }
  printf("\t(b)** y=%d **\n", y_b);

  // (c)
  y_c = (x != 0) ? ((x < 0) ? 1 : -1) : 0;
  printf("\t(c)** y=%d **\n", y_c);

  return 0;
}