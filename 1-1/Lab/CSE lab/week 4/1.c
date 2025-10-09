#include <stdio.h>
int main(){
  int n;
  printf("Enter the size of list : ");
  scanf("%d",&n);

  int num[n];
  for (int i = 0; i < n; i++){
    scanf("%d", &num[i]);
  }
  int max1 = -1, max2 = -2;
  for (int i = 0; i < n; i++){
    if (num[i] > max1){
      max1 = num[i];
    }
  }
  for (int i = 0; i < n; i++){
    if (num[i] > max2 && num[i] != max1){
      max2 = num[i];
    }
  }

  if(max2 >= 0){
    printf("2nd largest = %d\n", max2);
  }
  else{
    printf("Invalid inputs.\n");
  }
}