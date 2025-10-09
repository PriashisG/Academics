#include<stdio.h>
int main(){
  char arr[20];
  for (int i = 0; i < 20; i++){
    scanf("%c", &arr[i]);
    if (arr[i] == '\n'){
      arr[i] = '\0';
      break;
      }
  }

  for (int i = 0; i < 20; i++){
    if (arr[i] >= 'A' && arr[i] <= 'Z'){
      arr[i] += 32;
    }
  }
  
  for (int i = 0; i < 20; i++){
    if (arr[i] != '\0'){
      printf("%c", arr[i]);
    }
    else {break;}
  }
  printf("\n");
}