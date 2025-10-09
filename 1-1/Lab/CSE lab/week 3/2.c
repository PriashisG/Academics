#include <stdio.h>
#include <math.h>

int fac(int a);

int main(){
  int c;
  scanf("%d", &c);
  float x = c;

  double res = 1 - (x*x)/fac(2) + pow(x,4)/fac(4) - pow(x,6)/fac(6) + pow(x,8)/fac(8) - pow(x,10)/fac(10);

  printf("Result = %.2f \n", res);
}
int fac(int a){
  int r = a;
  for (int i = a-1; i >= 1; i--){
    r *= i;
  }

  return r;
}