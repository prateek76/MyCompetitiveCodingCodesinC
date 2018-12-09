#include<stdio.h>
#include<string.h>

int main()
{
  int T,store1,store2,store,temp;
  char S[100006];
  scanf("%d",&T);
  while (T--) {
    scanf("%s",S);
    for (int i=0;i<strlen(S);i++) {
      if (S[i] == '1') {
        store1 = i;
        break;
      }
    }
    for (int i=strlen(S)-1;i>=0;i--) {
      if (S[i] == '1') {
        store2 = i;
        break;
      }
    }
      for (int i=store1;i<=store2;i++) {
        if (S[i] == '0') {
          temp = 0;
          break;
        } else {
          temp = 1;
        }
      }

    if (temp == 1) {
      printf("YES\n");
    }
    else {
      printf("NO\n");
    }
  }
  return 0;
}
