#include<stdio.h>

int main()
{
  long long int N,K,arr[100006],i,j,cntk = 0,cntans = 0,arrnew[100006];
  scanf("%lld %lld",&N,&K);
  for ( i = 0; i < N; i++)
    {
      scanf("%lld",&arr[i]);
      if (arr[i] < K) {
        arrnew[cntk] = arr[i];
        cntk++;
      }
    }

  for ( i = 0; i < cntk-1; i++) {
    for(j = i+1; j < cntk;j++) {
      if (arrnew[i]+arrnew[j] < K) {
        cntans++;
      }
    }
  }
  printf("%lld",cntans);
  return 0;
}
