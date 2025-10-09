#include <stdio.h>
int main(){
  int n;
  scanf("%d", &n);
  int u = n % 10;
  int t = (n / 10) % 10;
  int h = n / 100;
  
  int result = (u*u*u) + (t*t) + h;

  if (n == result) printf("Ture\n");
  else printf("False\n");
}