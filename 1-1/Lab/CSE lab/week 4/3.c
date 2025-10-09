#include<stdio.h>
int main(){
  int n;
  scanf("%d", &n);
  int num[n];
  for (int i = 0; i < n; i++){scanf("%d", &num[i]);}

  int posCnt = 0, negCnt = 0, oddCnt = 0, evenCnt = 0;
  int pos[1000], neg[1000], odd[1000], even[1000];
  for (int i = 0; i < n; i++){
      if (num[i] > 0) {pos[posCnt] = i;
      posCnt++;
      }
      else if (num[i] < 0){
        neg[negCnt] = i;
        negCnt++;}
      if (num[i] % 2 == 0){
        even[evenCnt] = i;
        evenCnt++;}
      else{
        odd[oddCnt] = i;
        oddCnt++;
      }
  }
  printf("Positive count : %d \n",posCnt);
  for (int i = 0; i < posCnt; i++) printf("%d ",num[pos[i]]);
  printf("\nNegative count : %d \n",negCnt);
  for (int i = 0; i < negCnt; i++) printf("%d ",num[neg[i]]);
  printf("\nEven count : %d \n",evenCnt);
  for (int i = 0; i < evenCnt; i++) printf("%d ",num[even[i]]);
  printf("\nOdd count : %d \n",oddCnt);
  for (int i = 0; i < oddCnt; i++) printf("%d ",num[odd[i]]);
  printf("\n");
}
