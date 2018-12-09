#include<stdio.h>

int main()
{
  long long int T,N,arr[100006],i;
  scanf("%lld",&T);
  while (T--)
  {
    scanf("%lld",&N);
    scanf("%lld",&arr[0]);
    long long int min = arr[0];
    long long int cnt = 1;
    for ( i = 1; i < N; i++) {
      scanf("%lld",&arr[i]);
      if(arr[i] < min)
      {
        cnt = 0;
        min = arr[i];
        cnt++;
      }
      else if(arr[i] == min)
      {
        cnt++;
      }
    }
    if(cnt%2 == 1){
      printf("Lucky\n");
    }
    else{
    printf("Unlucky\n");
  }

  }
  return 0;
}
