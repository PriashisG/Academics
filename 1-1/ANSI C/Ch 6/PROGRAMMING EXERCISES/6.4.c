#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int count_a = 0, count_b = 0, count_c = 0, count_d = 0;

  // Seed the random number generator with the current time
  srand(time(NULL));

  printf("20 random numbers in the range 0 to 100 : ");

  for (int i = 0; i < 20; i++)
  {
    int randomNumber = rand() % 101; // Generate a number between 0 and 100
    if (i == 19)
    {
      printf("%d", randomNumber);
    }
    else
    {
      printf("%d , ", randomNumber);
    }

    if (randomNumber > 80)
    {
      count_a += 1;
    }
    else if (randomNumber > 60)
    {
      count_b += 1;
    }
    else if (randomNumber > 40)
    {
      count_c += 1;
    }
    else
    {
      count_d += 1;
    }
  }

  printf("\n\n\t(a) More than 80 = %d \n", count_a);
  printf("\t(b) More than 60 = %d \n", count_b);
  printf("\t(c) More than 40 = %d \n", count_c);
  printf("\t(d) Less than 40 & equal 40 = %d \n", count_d);
  printf("\t(e) In range of 81 to 100 = %d \n", count_a);
  printf("\t(f) In range of 61 to 80 = %d \n", count_b);
  printf("\t(g) In range of 41 to 60 = %d \n", count_c);
  printf("\t(h) In range of 0 to 40 = %d \n", count_d);

  return 0;
}
