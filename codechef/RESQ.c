#include<stdio.h>
#include<math.h>

int main()
{
  long long int T,N,sq;
  scanf("%lld",&T);
  while(T--)
  {
    scanf("%lld",&N);
      sq = sqrt(N);
      //printf("kk%lldkk",sq);
      for(long long int i = sq; ;i++)
      {
        if (sq*i == N)
        {
          //printf("%lld\n",abs(sq-i));
          printf("%lld\n",i-sq);
          break;
        }
        if(sq*i > N)
        {
          printf("%lld\n",N-1);
          break;
        }
      }
  }
  return 0;
}
