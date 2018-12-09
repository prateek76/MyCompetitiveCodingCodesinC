#include <stdio.h>

int main()
{
  int a,b,c,N,Q;
  int arr[100006]={0};
  scanf("%d %d", &N, &Q);
  while (Q--)
  {
      scanf("%d %d %d\n",&a,&b,&c);
      int cnt = 0;
      if(a == 0)
      {
        for(int i = b; i <= c; i++)
        {
          if(arr[i] == 0)
          {
            arr[i] = 1;
          }
          else
          {
            arr[i] = 0;
          }
        }
      }
      else
      {
        for(int i = b; i <= c; i++)
        {
          if (arr[i] == 1)
          {
            cnt++;
          }
        }
        printf("%d\n",cnt);
      }
  }
  return 0;
}
