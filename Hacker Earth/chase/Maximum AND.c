#include<stdio.h>

int main()
{
  int T,A,B,temp;
  scanf("%d",&T);
  while (T--) {
    scanf("%d %d",&A,&B);
    temp = A&B;
    for (int i = A; i < B; i++) {
      for (int j = i+1; j <= B; j++) {
        if ((i&j) > temp) {
          temp = (i&j);
        }
      }
    }
    printf("%d\n",temp);
  }
  return 0;
}
//partial submision
