#include<stdio.h>

int main() {
  int T,n,I[1000],i,swap,temp;
  scanf("%d",&T);
  while (T--) {
    int cnt = 0;
    scanf("%d",&n);
    for (i=1;i<=n;i++) {
      scanf("%d",&I[i]);
    }
    //sort it
    while (1) {
      swap = 1;

      for (i=1;i<=n-1;i++) {
        if (I[i]>I[i+1]) {
          temp = I[i];
          I[i] = I[i+1];
          I[i+1] = temp;
          swap = 0;
        }
      }
      if (swap == 1) {
        break;
      }
    }
    for (i=1;i<=n;i++){
      if (I[i-1]!=I[i]) {
        cnt++;
      }
    }
    printf("%d\n",cnt);
    for (i=1;i<=n;i++) {
      printf("%d ",I[i]);
    }
  }
  return 0;
}
