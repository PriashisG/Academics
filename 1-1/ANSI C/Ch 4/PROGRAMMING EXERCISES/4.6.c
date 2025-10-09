#include<stdio.h>
#include<math.h>
int main()
{
  float u,a,t,d;

  while(1)
  {
    printf("\t***TO EXIT FROM THE PROGRAMME, GIVE INPUT 999 IN U *** \n\n");
    printf("Enter inital velocity (ms^-1) : ");
    scanf("%f",&u);

    if (u == 999)
      {printf("\tTHANKS FOR USING THIS PROGRAMME.\n");
        break;}

    printf("Enter acceleration (ms^-2) : ");
    scanf("%f",&a);
    printf("Enter time the vehicle travelled (s) : ");
    scanf("%f",&t);

    d = u*t + .5*a*pow(t,2);

    printf("\n\t******* The distance is %.2f m *******\n",d);
  }

  return 0;
}