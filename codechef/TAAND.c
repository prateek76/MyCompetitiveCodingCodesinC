#include<stdio.h>

int main()
{
  int N,arr[1000006];
  scanf("%d",&N);
  scanf("%d\n",arr[0]);
  int max = arr[0];
  for (int i = 1; i < N; i++)
  {
    scanf("%d\n",&arr[i]);
    if(arr[i] > max)
    {
      max = arr[i];
    }
  }
  return 0;
}
