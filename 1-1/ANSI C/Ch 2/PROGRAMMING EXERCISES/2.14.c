#include<stdio.h>
#include<math.h>
int main()
{
  float R,area,perimeter;

  R=pow((pow(0-4,2)+pow(0-5,2)),.5);
  perimeter=2*3.1416*R;
  area=3.1416*R*R;
  
  printf("\t***** The perimeter of the circle = %.2f m *****\n",perimeter);
  printf("\t****** The area of the circle = %.2f m^2 ******\n",area);

  return 0;
}