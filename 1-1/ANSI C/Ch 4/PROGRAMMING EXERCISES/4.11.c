#include<stdio.h>
int main()
{
  int m,n;


  printf("Enter the value of m & n respectively : ");
  scanf("%d%d",&m,&n);

  if (n!=0)
  {
    if (m%n==0)
    {
      printf("M is multiple of n \n");
    }
    else
    {
      printf("M is not multiple of n \n");
    }
  }
  else
  {
    printf("N cannot be zero!!\n");
  }

  return 0;
}