#include<stdio.h>

int main()
{
  long long int T,N,K,a,b;
  scanf("%lld",&T);
  while (T--)
  {
      scanf("%lld%lld",&N,&K);
      if(N == 0)
      {
        printf("0 %lld\n",K);
      }
        else if(K == 0)
        {
          printf("0 0\n");
        }
        else{
          a = N/K;
          //b = N-a*(K);
          b = N%K;

        printf("%lld %lld\n",a,b);
        }

  }
  return 0;
}
