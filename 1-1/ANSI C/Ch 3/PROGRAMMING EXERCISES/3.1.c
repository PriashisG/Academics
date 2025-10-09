#include<stdio.h>
int main()
{
  int n;
  float i=1, num=0,sum=0;

  printf("Enter a value of n : ");
  scanf("%d",&n);

  printf("The series is : ");
  while (i<=n)
  {
    num = 1/i;
    sum = sum + num;
    
    if (i==1)
    {
      printf("1 +");
    }
    else if (i<n)
    {
    printf(" 1/%.0f +",i);
    }
    else
    {
      printf(" 1/%.0f ",i);
    }
    i= i+1;
  }

  printf("\n\n\t********** Sum = %.2f ********** \n",sum);

  return 0;
}