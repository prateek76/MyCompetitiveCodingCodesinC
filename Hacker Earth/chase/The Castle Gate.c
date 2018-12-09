#include<stdio.h>

int main()
{
  int T,N;
  scanf("%d",&T);
  while (T--) {
    int cnt = 0;
    scanf("%d",&N);
    for (int i = 1; i <= N-1; i++) {
      for (int j = i+1; j <= N; j++) {
        if((i^j) <= N){
          cnt++;
        }
      }
    }
    printf("%d\n",cnt);
  }
  return 0;
}
