#include<stdio.h>
#include<string.h>

int main()
{
  int T,max,min,lag;
  char S1[100006],S2[100006];
  scanf("%d",&T);
  while (T--) {
    scanf("%s",S1);
    scanf("%s",S2);
    int L1 = strlen(S1);
    int L2 = strlen(S2);
    if(L1>L2)
      max = L1;
      min = L2;
    else
      max = L2;
      min = L1;
    for (int i = 0; i < max; i++) {
      for (int j = 0; j < min; j++) {
        if (S1[i] == S2[j]) {
          lag = 1;
          break;
        }
      }
      if (lag == 1) {
        break;
      }
    }
    if (lag == 1) {
      printf("Yes\n");
      lag = 0;
    }
    else{
      printf("No\n");
      lag = 0;
    }
  }
  return 0;
}
