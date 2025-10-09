#include <stdio.h>
int main(){
  char n;
  scanf("%c", &n);
  if (n >= 'A' && n <= 'Z') printf("%c is a capital letter\n", n);
  else if (n >= 'a' && n <= 'z') printf("%c is a small letter\n", n);
  else if (n >= '0' && n <= '9') printf("%c is a digit\n", n);
  else printf("%c is special symbol\n",n);
}