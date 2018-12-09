#include<stdio.h>
#include<math.h>

int main()
{
  long long int T,N,S[5006],temp;
  scanf("%lld",&T);
  while(T--)
  {
    long long int min = S[0];
    scanf("%lld",&N);
    for (long long int i = 0; i < N; i++) {
      scanf("%lld",&S[i]);
    }
    min = abs(S[0]-S[1]);
    for (long long int i = 0; i < N-1; i++) {
      for (long long int j = i+1; j < N; j++) {
        if(abs(S[i]-S[j])<min)
        {
          min = abs(S[i]-S[j]);
        }
        if (abs(S[i]-S[j]) == 0) {
          min = 0;
          break;
        }
      }
    }
    printf("%lld\n",min);
}
  return 0;

}
