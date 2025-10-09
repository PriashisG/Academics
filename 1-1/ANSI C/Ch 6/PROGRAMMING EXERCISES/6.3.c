#include <stdio.h>
#include<math.h>
int main()
{
  int a, b, c, d, m, n;

  printf("The equations are : \tax1 + bx2 = m \n\t\t\tcx1 + dx2 = n \n");
  printf("Enter the value a,b,c,d,m,n respectively : ");
  scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&m,&n);

  printf("Your equations are : \t%dx1 + %dx2 = %d \n\t\t\t%dx1 + %dx2 = %d\n",a,b,c,d,m,n); 

if ((a*d-c*b) == 0)
  {
    printf("\n\t***** Solutions of the equations are infinity *****\n");
  }

  float x1 = (m*d-b*n)/(a*d-c*b);
  float x2 = (n*a-m*c)/(a*d-c*b);

  if (a*d-c*b !=0)
  {
    printf("\n\t***** Solutions of the equations are : x1 = %.2f & x2 = %.2f *****\n",x1,x2);
  }
  
  return 0;
}