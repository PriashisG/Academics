#include<stdio.h>
int main()
{
  int num;

  printf("\n *** EVEN-ODD FINDER *** \n");
  printf("Enter a number : ");
  scanf("%d",&num);

  if ( (num%2) == 0 )
  {
    printf("NUMBER IS EVEN \n");
  }
  else if ( (num%2)!=0 )
  {
    printf("NUMBER IS ODD \n");
  }
 return 0;
}