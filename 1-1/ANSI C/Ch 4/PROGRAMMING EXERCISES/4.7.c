#include<stdio.h>
#include<math.h>
int main()
{
  double demand=34593.4, setup=9012.32, holding=304.2, EOQ, TBO;

  EOQ = pow( (demand*setup)/holding ,.5);
  TBO = pow( (2*setup)/(demand*holding) ,.5);

  printf("\n\t****** EOQ = %.4f ****** \n",EOQ);
  printf("\t****** TBO = %.4f ****** \n",TBO);

  return 0; 
}