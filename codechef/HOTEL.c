#include<stdio.h>

int main()
{
  int T,N,arr[10006],times[10006],tempa,tempt;
  scanf("%d",&T);
  while (T--)
  {
    scanf("%d",&N);
    for(int i = 0; i < N; i++)
    {
      scanf("%d",&arr[i]);
    }
    for (int i = 0; i < N; i++)
    {
      scanf("%d",&times[i]);
    }
    while(2)
    {
    int swap = 0;
    for(int i = 0; i < N-1; i++)
    {
      if (arr[i] > arr[i+1])
      {
        tempa     = arr[i];
        tempt     = times[i]
        arr[i]    = arr[i+1];
        times[i]  = times[i+1];
        arr[i+1]  = tempa;
        times[i+1]= tempt;
        swap = 1;
      }
    }
    if(swap == 0)
    {
      break;
    }
  }
  for(int i = 0;i < N; i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
  for(int i = 0;i < N; i++)
  {
    printf("%d ",times[i]);
  }
  printf("\n");
  }
  return 0;
}
