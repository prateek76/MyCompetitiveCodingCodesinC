#include<stdio.h>
#include<math.h>

int main()
{
  long long int N,i,j,arr[1000006],sum=0;
  for(i=1;i<=N;i++)
  {
    scanf("%d",&arr[i]);
  }
  for ( i = 1; i <= N - 1; i++) {
    for ( j = 2; j <= N; j++) {
      sum += abs(arr[i]-arr[j]);
    }
  }
  printf("%lld",sum);
  return 0;
}
