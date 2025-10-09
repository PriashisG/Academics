#include<stdio.h>
#include<math.h>
int main()
{
  int number;
  double sq_root, sq;

  printf("\n\t   ******* TABLE OF SQ-ROOT & SQUARE *******\n\n");
  printf("\t number \t sq-root \t square \n");

  for (number=0; number<=100; number+=10)
  {
    sq_root=pow(number,.5);
    sq=pow(number,2);
    
    printf("\t   %d \t\t%  .2f \t\t %.2f \n",number,sq_root,sq);
    
  }


  return 0;
}