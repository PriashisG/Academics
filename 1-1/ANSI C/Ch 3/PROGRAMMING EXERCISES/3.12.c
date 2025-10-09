#include<stdio.h>
int main()
{
  int num,tk;

  printf("Enter a amount : ");
  scanf("%d",&num);

  printf("Enter the smallest note possible in your country : ");
  scanf("%d",&tk);

  printf("\n\t******** %d amount equals to %d notes of $%d  ********\n",num,num/tk,tk);

  return 0;
}