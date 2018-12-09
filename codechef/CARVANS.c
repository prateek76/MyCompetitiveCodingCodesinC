#include<stdio.h>

int main()
{
  int T,N,arr[10006];
  scanf("%d",&T);
  while (T--) {
    int cnt = 1;
    scanf("%d",&N);
    for (int i = 0; i < N; i++) {
      scanf("%d",&arr[i]);
    }
    if(N>1){
    for (int i = 1; i < N; i++) {
      int flag = 0;
      for (int j = 0; j < i; j++) {
        //arr[i]<=arr[j]
        if (arr[i]>arr[j]) {
          flag = 1;
          break;
        }
      }
      if (flag = 0) {
        cnt++;
      }
    }
  }
    printf("%d\n",cnt);
  }
  return 0;
}
