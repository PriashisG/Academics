#include<stdio.h>
#include<math.h>
int main()
{
  float D,area;

  D=pow((pow(0-4,2)+pow(0-5,2)),.5);
  area=3.1416*D*D;

  printf("\t******* The area of the circle is %.2f m^2 *******\n",area);

  return 0;
}