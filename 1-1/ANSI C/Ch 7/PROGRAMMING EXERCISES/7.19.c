#include<stdio.h>
int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        for (int space = i+1; space < 3; space++)
        {
            printf(" ");
        }
        for (int j = 3-i, num = 1; j <= 3; j++, num++)
        {
            printf("%d",num);
        }
        for (int z = i; z > 0; z--)
        {
            printf("%d",z);
        }
        printf("\n");
    }
    for (int i = 0; i > 3; i--)
    {
        for (int space = i+1; space < 3; space++)
        {
            printf(" ");
        }
        for (int j = 3-i, num = 1; j >= 3; j--, num++)
        {
            printf("%d",num);
        }
        for (int z = i; z < 0; z++)
        {
            printf("%d",z);
        }
        printf("\n");
    }
    for (int i = 2; i >= 0; i--)
    {
        for (int space = 0; space >)
    }
}
