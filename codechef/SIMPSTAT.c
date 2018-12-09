#include<stdio.h>
//TLE SHOWN
int main()
{
  int N,T,K,i,swap,temp,arr[100000],ap;
  float ans;
  scanf("%d",&T);
  while (T--) {
    int sum = 0;
    scanf("%d %d",&N,&K);
    ap = N - 2*K;
    for ( i = 0; i < N; i++) {
      scanf("%d",&arr[i]);
    }
    while (1) {
      swap = 0;

      for ( i = 0; i < N-1; i++) {
        if(arr[i] > arr[i+1]){
          temp = arr[i+1];
          arr[i+1] = arr[i];
          arr[i] = temp;
          swap = 1;
        }
      }
      if (swap == 0) {
        break;
      }
    }
    for ( i = K; i < N-K; i++) {
      sum += arr[i];
    }
    ans = (float)sum/ap;
    printf("%f\n",ans);
  }
  return 0;
}
