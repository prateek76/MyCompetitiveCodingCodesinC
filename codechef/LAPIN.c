#include<stdio.h>
#include <string.h>
int main()
{
  int T;
  char S[1006];
  scanf("%d",&T);
  while (T--) {
    int len,mid,sum1=0,sum2=0;
    scanf("%s",S);
    len = strlen(S);
    mid = (len-1)/2;
    for (int i = 0; i <= mid; i++) {
      sum1 += (int)S[i];
    }
    for (int i = mid+1; i < strlen; i++) {
      sum2 += (int)S[i];
    }
    if (sum1 == sum2) {
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}
