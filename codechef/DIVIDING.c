#include<stdio.h>

int main()
{
  long long int N,C[100006],sum1=0,sum2=0;
  scanf("%lld",&N);
  for (int i = 1; i <= N; i++)
  {
    sum1 += i;
    sum2 += C[i];
  }
  if (sum1 == sum2) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
  return 0;
}
