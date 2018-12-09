#include<stdio.h>

int main()
{
  int T,N,K,A[100006];
  scanf("%d",&T);
  while (T--) {
    scanf("%d %d",&N,&K);
    for (int i = 1; i <= N; i++)
    {
      scanf("%d",&A[i]);
    }
    for(int i = N-(K%N)+1; i <= N; i++)
    {
      printf("%d ",A[i]);
    }
    for (int i = 1; i < N-(K%N)+1; i++) {
      printf("%d ",A[i]);
    }
    printf("\n");
  }
  return 0;
}
