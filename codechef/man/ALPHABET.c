#include<stdio.h>
#include<string.h>
//#include ""
//YorN(char s[])

int main()
{
  int N;
  char S[26];
  char W[50];
  scanf("%s",S);
  scanf("%d",&N);
  while (N--) {
    int what = 0;
    scanf("%s",W);
    for(int i=0;i<strlen(W);i++)
    {
      for (int j=0; j<strlen(S); j++)
      {
        if (S[j] == W[i]) {
          what++;
        }
      }
    }
    if (what == strlen(W)) {
      printf("Yes\n");
    } else {
      printf("No\n");
    }

  }
  return 0;
}
