#include<stdio.h>

void sieve(int n) {

  int num[n+1];
  //initialize all as 1
  //memset(num,1,sizeof(num));//all index value turned to 1
  for (int i = 2; i <= n; i++)
  {
    num[i] = 1;
  }

  for (int i = 2 ; i*i <= n; i++)
  {
    if (num[i] == 1)
    {
      for (int j = i*2; j <= n; j+=i)
      {
        num[j] = 0;
      }
    }
  }
    for (int i = 2; i <= n; i++)
    {
      if (num[i])
      {
        printf("%d\n",i);
      }
    }


}

int main()
{
  sieve(40);
  return 0;
}
