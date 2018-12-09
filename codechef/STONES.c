#include<stdio.h>

int main()
{
  int T;
  char S[105],J[105];
  scanf("%d",&T);
  while (T--) {
    int count=0,flag;
    scanf("%s",J);
    scanf("%s",S);
    for (int i = 0; i < strlen(S); i++) {
      flag=0;
      for (int j = 0; j < strlen(J); j++) {
        if(S[i] == J[j])
        {
          flag = 1;
        }
      }
      if (flag == 1) {
        count++;
      }
    }
    printf("%d\n",count);
  }
  return 0;
}
