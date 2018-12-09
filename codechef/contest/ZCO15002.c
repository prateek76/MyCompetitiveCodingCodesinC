#include<stdio.h>
#include<math.h>

int main()
{
  long long int N,K,arr[65008],i,j,cnt=0;
  scanf("%lld %lld",&N,&K);
  for ( i = 1; i <= N; i++) {
    scanf("%lld",&arr[i]);
  }
  for ( i = 1; i <= N-1; i++) {
    for ( j = i+1; j <= N; j++) {
      if (abs(arr[i]-arr[j]) >= K) {
        cnt++;
      }
    }
  }
  printf("%lld",cnt);
  return 0;
}
