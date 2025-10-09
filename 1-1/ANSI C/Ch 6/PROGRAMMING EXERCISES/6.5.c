#include<stdio.h>
int main()
{
  int mark_p,mark_m,mark_c,total_pm,total;

  printf("Enter the numbers of Physics, Chemistry & Math respectively : ");
  scanf("%d %d %d",&mark_p,&mark_c,&mark_m);

  total = mark_p + mark_c + mark_m;
  total_pm = mark_p + mark_m;

  printf("\nTotal marks = %d \n",total);
  printf("Total of Physics & Mathematics marks = %d \n",total_pm);

  if (mark_m >=60)
  {
    if (mark_p>=50)
    {
      if (mark_c>=40)
      {
        if (total>=200 || total_pm>=150)
        {
          printf("\n\t****** The Candidate is eligible. ******\n");
        }
        else
        {
          printf("\t****** The Candidate is not eligible. ******\n");
        }
      }
    }
  }


  return 0;
}