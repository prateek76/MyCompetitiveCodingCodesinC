#include<stdio.h>
#include<math.h>

int main()
{
  long long int t,m,n,i,j,flag;
  scanf("%lld",&t);
  while(t--)
  {
    scanf("%lld %lld",&m,&n);
    for ( i = m; i <= n; i++) {
      flag = 0;
      if(i == 1){
        flag == 1;
      }else{
        for (j = 2; j <= sqrt(i); j++) {
          if (i%j == 0) {
            flag = 1;
            break;
          }
        }
      }

      if(flag == 0){
      printf("%lld\n",i);
    }
    flag = 0;
    }
    printf("\n");
  }
  return 0;
}
