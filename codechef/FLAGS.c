#include<stdio.h>

long long int process(long long int n) {
  long long int sum = 0;
  sum += 2*n*(n-1)*(n-1);
  sum += 2*n*(n-1)*(n-2)*(n-2);
  sum += n*(n-1)*(n-2);

  return sum;
}

int main()
{
  long long int T,N,ans;
  scanf("%lld",&T);
  while (T--) {
      scanf("%lld",&N);
      ans = process(N);
      printf("%lld\n",ans);
  }


  return 0;
}
