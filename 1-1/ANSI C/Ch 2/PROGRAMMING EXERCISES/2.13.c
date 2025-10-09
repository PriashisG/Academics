#include <stdio.h>
#include<math.h>
int main()
{
  int x1, x2, y1, y2;
  float D;

  printf("1st point, x1 : ");
  scanf("%d",&x1);
  printf("y1 : ");
  scanf("%d",&y1);
  printf("1st point = (%d,%d)\n\n",x1,y1);

  printf("2nd point, x2 : ");
  scanf("%d",&x2);
  printf("y2 : ");
  scanf("%d",&y2);
  printf("2nd point = (%d,%d)\n\n",x2,y2);

  D=pow((pow(x1-x2,2)+pow(y1-y2,2)),.5);
  printf("\t*********** Distance bwetewwn two points = %.2f ***********\n",D);

  return 0;
}