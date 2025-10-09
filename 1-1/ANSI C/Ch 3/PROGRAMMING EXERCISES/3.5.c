#include<stdio.h>
int main()
{
  typedef int ROLL;
  ROLL index,class_1[5];

  for (int index=0; index<5 ; index++)
  {
    printf("Enter a roll : ");
    scanf("%d",&class_1[index]);
  }

  printf("\t**** CLASS ROLLS ****\n");
  for (index=0; index<5 ; index++)
  {
    printf("%d. %d \n",index+1,class_1[index]);
  }


  return 0;
}