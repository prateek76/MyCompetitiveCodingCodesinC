#include<stdio.h>

int main()
{
  int T,N,arr[10006];
  scanf("%d",&T);
  while (T--)
  {
      long long int sum=0,nonzcnt=0,z;
      scanf("%d",&N);
      for (int i = 0; i < N; i++)
      {
        scanf("%d",&arr[i]);
        if(arr[i]!=0){
          nonzcnt++;
        }
        sum += arr[i];
      }
      z = sum-100;
      if(sum < 100)
      {
        printf("NO\n");
      }
      else if(sum == 100)
      {
        printf("YES\n");
      }

      else if(nonzcnt > z)
      {
        printf("YES\n");
      }
      else{
        printf("NO\n");
      }


  }
  return 0;
}
