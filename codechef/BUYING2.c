#include<stdio.h>

int int main() {
  int T,N,K,X,arr[100006];
  scanf("%d",&T);
  while (T--) {
    int sum=0;
    scanf("%d %d",&N,&X);
    for(int i=0;i<N;i++)
    {
      scanf("%d",arr[i]);
      sum += arr[i];
    }
    K=sum/N;
    int min=arr[0];
    for (int i = 1; i < N; i++) {
      if (arr[i]<min) {
        min = arr[i];
      }
    }
    if((sum-min)/N == k)
    {
      printf("-1\n");
    }
    else
    {
      printf("%d\n",K);
    }
  }
  return 0;
}
