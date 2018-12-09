#include<stdio.h>

int main()
{
  int T,N;
  char S[100006];
  scanf("%d",&T);
  while (T--) {
    int cnt=0;
    scanf("%d",&N);
    scanf("%s",S);
    for (int i = 0; i < N; i++) {
      if (S[i] == '1') {
        cnt++;
      }
    }
    printf("%d\n",cnt);
  }
  return 0;
}
