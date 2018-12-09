#include<stdio.h>

int main()
{
  int T,arr[1000006],N,K,ans;
  scanf("%d",&T);
  while(T--)
  {
  scanf("%d %d",&N,&K);
    for (int i = 0; i < N; i++)
    {
      scanf("%d",&arr[i]);
    }
    int min = arr[0];
    for (int i = 1; i < N; i++)
    {
        if(arr[i] < min)
        {
          min = arr[i];
        }
    }
    ans = K - min;
    if (ans <= 0)
    {
      printf("0\n");
    }
    else
    {
      printf("%d\n",ans);
    }
  }
  return 0;
}
