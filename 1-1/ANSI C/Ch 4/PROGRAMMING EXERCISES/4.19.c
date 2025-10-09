#include<stdio.h>

int is_valid_date(int day,int month, int year);

int main()
{
  int day,month;
  long int year;

  printf("Enter a value for day : ");
  scanf("%d",&day);
  printf("Enter a value for month : ");
  scanf("%d",&month);
  printf("Enter a value for year : ");
  scanf("%ld",&year);

  int x = is_valid_date(day,month,year);

  if (x==11)
  {
    printf("\n\t**** The date is valid ***\n\n");
  }
  else if (x==22)
  {
    printf("Input date is not real. try a new date.\n\n");
  }
  





  return 0;
}
int is_valid_date(int day,int month,int year)
{
  if (month < 1 || month > 12) {
        return 22;
    }

    if (day < 1) {
        return 22;
    }

  switch (month)
  {
  case 1: case 3: case 5: case 7: case 9: case 11:
    if (day > 0 && day <= 31)
    {
      return 11;
    }
    break;
  case 4: case 6: case 8: case 10: case 12:
    if (day > 0 && day <= 30)
    {
      return 11;
    }
    break;
    case 2: 
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
      if (day > 0 && day <=29)
    {
      return 11;
    }
    }
    else
    {
      {
      if (day > 0 && day <=28)
    {
      return 11;
    }
    }
    break;
  default:
  return 22;
  break;
  }
  }
}