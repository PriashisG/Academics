#include <stdio.h>
int main(){
  int n;
  scanf("%d", &n);

  int fig1 = 0, fig2 = 1;
  for (int i = 0; i < n; i++){
    if (i == 0) printf("%d ", fig1);
    printf("%d ", fig2);
    int nextFig = fig1 + fig2;
    fig1 = fig2;
    fig2 = nextFig;
  }
  printf("\n");
}