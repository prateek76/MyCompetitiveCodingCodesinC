#include<stdio.h>

int isPrime(int x)
{
  for (int i = 2; i < x; i++) {
    if(X%i == 0)
    {
      return 0;
    }
  }
    return 1;
}

int main()
{
  int T,x,y,store;
  scanf("%d",&T);
  while(T--)
  {
    scanf("%d %d",&x,&y);
    for (int i = 1; i >= 1; i++) {
      if(isPrime(x+y+i))
      {
        store = i;
        break;
      }
    }
    printf("%d\n",store);
  }
  return 0;
}
