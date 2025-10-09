#include<stdio.h>
#include<math.h>
int main()
{
  float C,f,L=0.01,R=1;

  for (C=0.01; C<=0.1; C+=0.01)
  {
    f = pow( (1/(L*C))-(pow(R,2)/(4*pow(C,2))) ,.5);
  
    printf("\t**** The Frequency for C=%.2f is %.2fHz \n",C,f);
  }

  return 0;
}