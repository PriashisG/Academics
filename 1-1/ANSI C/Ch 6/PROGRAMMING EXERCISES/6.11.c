#include<stdio.h>
#include<math.h>

int isRightAngledTriangle(int a, int b, int c);

int main(void)
{
    int a,b,c;

    printf("Enter the values of a,b,c : ");
    scanf("%d %d %d",&a,&b,&c);

    if (isRightAngledTriangle(a, b, c))
    {
        printf("The integers %d, %d, and %d can form a right-angled triangle.\n", a, b, c);
    }
    else
    {
        printf("The integers %d, %d, and %d cannot form a right-angled triangle.\n", a, b, c);
    }

}
int isRightAngledTriangle(int a, int b, int c)
{
    // Check the three possible combinations
    if (pow(a,2) + pow(b,2) == pow(c,2) || pow(a,2) + pow(c,2) == pow(b,2) || pow(b,2) + pow(c,2) == pow(a,2))
    {
        return 1; // True
    }
    return 0; // False
}