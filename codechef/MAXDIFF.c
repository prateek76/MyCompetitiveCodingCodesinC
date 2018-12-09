#include<stdio.h>
#include<math.h>

int main()
{
  long long int T,K,N,arr[106],swap,temp;
  scanf("%lld",&T);
  while(T--)
  {
    long long int sum=0,SUM=0;
    scanf("%lld %lld",&N,&K);
    for (long long int i = 1; i <= N; i++) {
      scanf("%lld",&arr[i]);
      sum+=arr[i];
    }
    while (1) {
      swap = 1;
      for (long long int i = 1; i < N; i++) {
        if (arr[i]>arr[i+1]) {
          temp     = arr[i];
          arr[i]   = arr[i+1];
          arr[i+1] = temp;
          swap = 0;
        }
      }
      if(swap)
      {
        break;
      }
    }
    for (int i = 1; i <= K ; i++) {
      SUM += arr[i];
    }
    printf("%lld\n",abs(sum-2*SUM));
  }
  return 0;
}
