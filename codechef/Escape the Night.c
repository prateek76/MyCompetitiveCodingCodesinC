#include<stdio.h>
#include<math.h>

long long int one (long long int n)
        {
            long long count;
            while( n )
            {
            n = n&(n-1);
               count++;
            }
            if (count == 2) {
              return 1;
            }
            return 0;
        }

int main()
{
  long long int J = pow(10,9)+7;
  long long int N,T,i;
  scanf("%lld",&T);
  while (T--)
  {
    long long int cnt = 0;
    scanf("%lld",&N);
    for ( i = 1; i <= N; i++)
    {
      if (one(i))
      {
        cnt = (cnt%J)%J;
      }
    }
    printf("%lld\n",cnt);
  }
  return 0;
}
