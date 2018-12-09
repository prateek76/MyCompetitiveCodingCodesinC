#include<stdio.h>
#include<string.h>

int main()
{
  int T;
  char X[1000006],Y[1000006];
  scanf("%d",&T);
  while (T--) {
    scanf("%s",X);//\n
    scanf("%s",Y);

    for (int i = 0; i < strlen(X); i++) {
      if (X[i] == Y[i]) {
        if (X[i] == 'W') {
          X[i] = 'B';
        }
        else {
          X[i] = 'W';
        }
      } else {
        X[i] = 'B';
      }
    }
  printf("%s\n",X);
  }
}
