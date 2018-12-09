#include<stdio.h>

int main()
{
  int T,N,A[100006];
  scanf("%d",&T);
  while (T--) {
    int g = 0;
    scanf("%d",&N);
    for (int i = 0; i < N; i++) {
       scanf("%d",&A[i]);
       g ^= A[i];
    }
    if (g != 0) {
      printf("%d\n",g);
    }
    else {
      printf("-1\n");
    }
  }
  return 0;
}
