#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_PEOPLE 100

int main(void) 
{
    int ages[NUM_PEOPLE], count_50to60;
    
    // Seed the random number generator
    srand(time(NULL));
    
    // Generate random ages and store them in the array
    for(int i = 0; i < NUM_PEOPLE; i++) {
        ages[i] = rand() % 100 + 1; // Ages between 1 and 100
    }
        // Print the ages
    printf("Ages of %d random people:\n", NUM_PEOPLE);
    for(int i = 0; i < NUM_PEOPLE; i++) {
        if (i!=99)
        {
            printf("%d,", ages[i]);
        }
        else 
        {
            printf("%d", ages[i]);
        }
    }
    printf("\n\n");


    printf("Ages of persons 50 to 60  people:\n");
    for (int i =0; i < NUM_PEOPLE; i++)
    {
        if (ages[i] >= 50 && ages[i] <=60)
        {
            count_50to60++;
            printf("%d ",ages[i]);
        }
        else
        {
            continue;
        }
    }
    printf("\n\n\t*** Total person of age 50 to 60 = %d ***\n",count_50to60);
}