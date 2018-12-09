#include<stdio.h>

int main()
{
  long long int N,arr[100006],Q,M,i,temp,cnt;
  scanf("%lld",&N);
  for ( i = 0; i < N; i++)
  {
    scanf("%lld",&arr[i]);
  }
  while (2)
  {
    int swap = 0;
    for ( i = 0; i < N-1; i++)
    {
      if(arr[i] > arr[i+1])
      {
        temp     = arr[i];
        arr[i]   = arr[i+1];
        arr[i+1] = temp;
        swap = 1;
      }
    }
    if(swap == 0)
    {
      break;
    }
  }
  scanf("%lld",&Q);
  while (Q--) {
    cnt = 0;
    scanf("%lld",&M);
    if()
    {

    }else{
        for ( i = 0; i < N; i++)
    {
      if(arr[i] < M)
      cnt++;
    }
    }

    printf("%lld\n",cnt);
  }
  return 0;
}
