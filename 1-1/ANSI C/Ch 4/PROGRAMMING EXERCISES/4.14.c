#include<stdio.h>
#include<math.h>
int main()
{
  int degree;
  double sinx, cosx;

  printf("\n\t   ******* TABLE OF SIN & COS *******\n\n");
  printf("\t x(degree) \t sin(x) \t cos(x) \n");

  for (degree=0; degree<=180; degree+=15)
  {
    sinx = sin(degree);
    cosx = cos(degree);

    
    printf("\t   %d \t\t%  .3f \t\t %.3f \n",degree,sinx,cosx);
    
  }


  return 0;
}