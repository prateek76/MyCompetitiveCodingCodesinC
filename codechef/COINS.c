#include<stdio.h>

int main()
{
  long long int n,a,b,c,k,temp,sum,max;
  while (scanf("%lld",&N) != EOF) {

    temp = n;
    a = (n/2);
    b = (n/3);
    c = (n/4);
    k = ((n/2)+(n/3)+(n/4));
    if(k > temp)
    {
      n = ((n/2)+(n/3)+(n/4));

      if(n > temp)
      {
        max = n;
      }
      else
      {
        max = temp;
      }

    }
    else{
      max = temp;
    }
  }
  return 0;
}
