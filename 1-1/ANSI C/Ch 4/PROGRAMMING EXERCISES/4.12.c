#include<stdio.h>
int main()
{
  int a,b,c,sum;
  float avg;

  printf("Enter the value of a,b,c respectively : ");
  scanf("%d%d%d",&a,&b,&c);

  sum = a+b+c;
  avg = sum/3;
  
  printf("Sum of the numbers = %d \n",sum);
  printf("Avg of the numbers = %.2f \n",avg);

  if (a>b && a>c)
  {
    printf("%d is the largest number \n",a);
  }
  else if (b>a && b>c)
  {
    printf("%d is the largest number \n",b);
  }
  else
  {
    printf("%d is the largest number \n",c);
  }

  if (a<b && a<c)
  {
    printf("%d is the smallest number \n",a);
  }
  else if (b<a && b<c)
  {
    printf("%d is the smallest number \n",b);
  }
  else
  {
    printf("%d is the smallest number \n",c);
  }


  return 0;
}