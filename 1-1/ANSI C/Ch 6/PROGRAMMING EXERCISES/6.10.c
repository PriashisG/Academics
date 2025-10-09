#include<stdio.h>
#include<math.h>

float determinant (int a, int b, int c);

int main(void)
{
    int a, b, c;
    float d, x, x1, x2;

    printf("Enter values quadratic equation's(ax^2 + bx + c = 0) a, b, c : ");
    scanf("%d %d %d",&a, &b, &c);

  d =(determinant(a,b,c));

  if (a == 0 && b == 0)
  {
      printf("\t**** No solution ****\n");
  }
  else if (a == 0)
  {
      x = -(c / (float) b);
      printf("\t**** The solution of the equation is %.2f ****\n",x);
  }
  else if (d < 0)
  {
      printf("\t**** There are no real roots ****\n");
  }
  else
  {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
      printf("\t**** The solutions of the equation are %.2f & %.2f ****\n",x1,x2);
  }
}
float determinant (int a, int b, int c)
{
    return (pow(b,2) - 4*a*c);
}