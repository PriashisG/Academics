#include<stdio.h>
float identifier(float input); // function for identify the input positive or negative

int main() // main function
{
  float num;
  int count_pos=0, count_neg=0, f_return, pos=0, neg=0;
  while (1) // infinite loop for taking input unless the input number is zero
  {
    // taking input
    printf("Enter a number : ");
    scanf("%f",&num);

    // closing condition
    if (num==0)
    {
      break;
    }

    // calling function
    f_return = identifier(num);
    
    // analyzing return & counting pos & neg
    if (f_return==11){count_pos = count_pos+1;}
    else if (f_return==22){count_neg = count_neg+1;}
    else if (f_return==33){printf("Invalid input. Give a real number");}
  }

  // printing the final output
  printf("\n\t***************** Total number = %d ******************\n",count_pos+count_neg);
  printf("\t************* Total positive number = %d *************\n",count_pos);
  printf("\t************* Total negative number = %d ************* \n",count_neg);

  return 0;
}
float identifier(float input) // sub-function
{
  if (input>0)
  {
    return 11; // 11 represents positive number at the analyzing part of the main function 
  }
  else if (input<0)
  {
   return 22; // 22 represents negative number at the analyzing part of the main function
  }
  else
  {
    return 33; // 33 represents error input at the analyzing part of the main function
  } 
}