#include<stdio.h>

int main()
{
  long long int N,arr[100006],k=0;
  scanf("%lld",&N);
  for(int i = 0; i < N; i++)
  {
    scanf("%d",&arr[i]);
  }
  for(int i = 0; i < N - 1; i++)
  {
    for (int j = i + 1; j < N; j++)
    {
      k += (arr[i]&arr[j]);
    }
  }

  printf("%lld",k);
  return 0;
}
