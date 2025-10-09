#include <stdio.h>
int main(){
  char n;
  scanf("%c", &n);
  if (n >= 65 && n <= 90)
    printf("%c is a capital letter\n", n);
  else if (n >= 97 && n <= 122)
    printf("%c is a small letter\n", n);
  else if (n >= 48 && n <= 57)
    printf("%c is a digit\n", n);
  else 
    printf("%c is special symbol\n",n);
}