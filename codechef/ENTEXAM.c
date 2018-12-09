#include<stdio.h>
#include<math.h>

int main()
{
  int T,K,N,M,E,i,arr[10006][10006],swap,temp,out,ans;
  int sum[10006];
  scanf("%d",&T);
  while (T--)
  {
      scanf("%d %d %d %d",&N,&K,&E,&M);
      for (int i = 0; i < N-1; i++) {
        sum[i] = 0;
        for (int j = 0; j < E; j++) {
          scanf("%d ",&arr[i][j]);
          sum[i] += arr[i][j];
        }
      }
      sum[N-1] = 0;
      for(int j = 0; j < E-1; j++) {
        scanf("%d ",&arr[N-1][j]);
        sum[N-1] += arr[N-1][j];
      }

      //bubble sort
      while(1)
      {
        swap = 0;
        for (int i = 0; i < N-2; i++) {
          if(sum[i]<sum[i+1]) {
            temp = sum[i];
            sum[i] = sum[i+1];
            sum[i+1] = temp;
            swap = 1;
          }
        }
        if(swap == 0){
          break;
        }
      }
      out = sum[N-1] - sum[K-1];
      if (out>0) {
        ans = 0;
      } else {
        ans = abs(out) + 1;
      }
      if(ans <= M){
      printf("%d\n",ans);
    } else {
      printf("Impossible\n");
    }
  }
  return 0;
}
