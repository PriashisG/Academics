#include<stdio.h>
int main(){
  int a, b;
  char ch;
  
  scanf("%d %d %c", &a, &b, &ch);

  switch (ch){
    case '+':
      printf("Sum = %d\n", a + b);
      break;
    case '-':
      printf("Difference = %d\n", a - b);
      break;
    case '*':
      printf("Product = %d\n", a * b);
      break;
    case '/':
      printf("Quotient = %.2f\n", a / (float)b);
      break;
    case '%':
      printf("Remainder = %d\n", a % b);
      break;
    default :
      printf("Please inter a valid input\n");
  }
}