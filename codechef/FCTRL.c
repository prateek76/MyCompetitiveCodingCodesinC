#include<stdio.h>

int main()
{
  int T,N;
  scanf("%d",&T);
  while (T--) {
    int cnt = 0;
    scanf("%d",&N);
    for (int i = 5; i <= N; i *= 5) {
      count += N/i;
    }
    printf("%d\n",cnt);
  }
  return 0;
}
