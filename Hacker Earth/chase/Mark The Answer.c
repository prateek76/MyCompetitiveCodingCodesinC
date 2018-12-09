#include <stdio.h>

int main()
{
  long long int N,X,i,A[100006],cntans1=0,antans2=0,cnttemp=0;
  scanf("%lld %lld",&N,&K);
  for ( i = 1; i <= N; i++) {
    scanf("%lld",&A[i]);
  }
  for ( i = 1; i <= N; i++) {
    //logic goes here
    if(A[i]<=K)
    {
      cntans1++;
    }
    if (A[i]>K)
    {
      cnttemp++;
    }
    if (cnttemp == 2)
    {
      break;
    }
  }
  printf("%lld\n",cntans1);
  return 0;
}
