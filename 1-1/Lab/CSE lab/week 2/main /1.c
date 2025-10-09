#include <stdio.h>
int main(){
  int n, sum = 0;
  scanf("%d", &n);
  while (n != 0){
    int rem = n % 10;
    n /= 10;
    sum += rem;
  }

  printf("sum : %d\n", sum);
}