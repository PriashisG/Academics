#include <stdio.h>
int main()
{
  int a, b, c;

  printf("Enter the value of a,b,c respectivly : ");
  scanf("%d %d %d", &a, &b, &c);

  printf("\n\ta)");
      printf("  %d \n", a);
      printf("\t    %d \n", b);
      printf("\t    %d \n", c);
  
  printf("\tb)  %d \n\t    %d \n\t    %d \n",a,b,c);

  return 0;
}