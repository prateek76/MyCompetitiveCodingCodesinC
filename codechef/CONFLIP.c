#include<stdio.h>

int main()
{
  int T,G,I,N,Q,ans;
  scanf("%d",&T);
  while (T--) {
    scanf("%d",&G);
    while (G--) {
      scanf("%d %d %d",&I,&N,&Q);
      if (N%2 == 1) {
        if (I == 1) {
          if(Q == 1){
            ans = N/2;
          }
          else{
            ans = (N/2) + 1;
          }
        }
        else {
          if (I == 2) {
            if(Q == 1){
              ans = (N/2) + 1;
            }
            else{
              ans = N/2;
            }
        }
      }
    }
    else {
      ans = N/2;
    }
    printf("%d\n",ans);
  }
}
  return 0;
}
