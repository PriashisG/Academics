#include<stdio.h>

#define TOTAL_MARK 100
#define TOTAL_STUDENT 5

int main()
{
  int mark[TOTAL_STUDENT]={}, i;

  for ( i = 1; i <= TOTAL_STUDENT; i++)
  {
    printf("Enter the mark of student 0%d : ",i);
    scanf("%d",&mark[i-1]);
  }
  
  printf("\n\t******** MARKS OF ALL STUDENTS ********\n");
  for (i=1; i<=TOTAL_STUDENT; i++)
  {
    printf("Marks of student 0%d = %d \n",i,mark[i-1]);
  }

  return 0;
}