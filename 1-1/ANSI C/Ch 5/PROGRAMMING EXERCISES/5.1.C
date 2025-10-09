#include <stdio.h>
#include <ctype.h>
int main()
{
  char input[] = "WORDPROCESSING";

  printf("(a) ");
  for (int i = 0; i <= 13; i++)
  {
    printf("%c", input[i]);
    if (i == 3)
    {
      printf(" ");
    }
    if (i == 13)
    {
      printf("\n");
    }
  }
  printf("(b) ");
  for (int i = 0; i <= 13; i++)
  {
    printf("%c", input[i]);
    if (i == 3)
    {
      printf("\n    ");
    }
    if (i == 13)
    {
      printf("\n");
    }
  }
  printf("(c) %c.%c. \n",input[0],input[4]);
  
  return 0;
}