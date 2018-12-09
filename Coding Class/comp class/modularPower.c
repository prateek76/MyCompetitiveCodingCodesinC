#include<stdio.h>

int power(long long int a,long long int b,long long int M)
{
    if (b == 1) {
      return a;
    }
    if (b == 0) {
      return 1;
    }
    int temp = power(a,b/2,M)%M;
    if (b%2 == 0) {
      return ((temp%M)*(temp%M))%M;
    }
    else{
      return ((a%M)*(temp%M)*(temp%M))%M;
    }
}

int main()
{
  int ans = power(9,3,5);
  printf("%d\n",ans);
  return 0;
}
