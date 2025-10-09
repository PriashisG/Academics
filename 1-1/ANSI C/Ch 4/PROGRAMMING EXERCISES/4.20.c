#include<stdio.h>
#include<math.h>

int main()
{
  float side1,side2,side3;

  printf("Enter the value of side - 01 : ");
  scanf("%f",&side1);
  printf("Enter the value of side - 02 : ");
  scanf("%f",&side2);
  printf("Enter the value of side - 03 : ");
  scanf("%f",&side3);

  if (side1 == side2 || side2 == side3 || side1 == side3)
  {
    printf("The triangle is isosceles.\n");
  }
  else
  {
    printf("The triangle is not isosceles.\n");
  }


  return 0;
}