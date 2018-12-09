#include<stdio.h>

int main()
{
  long long int t,arr[100006],n,q,i,x,ans;
  scanf("%lld",&t);
  while (t--) {
    scanf("%lld",&n);
    for ( i = 1; i <= n; i++) {
      scanf("%lld",&arr[i]);
    }
    scanf("%lld",&q);
    while (q--) {
      ans = -1;
      scanf("%lld",&x);
      for(i = n; i >= 1; i--){
        if(arr[i] == x)
        {
          ans = i;
          break;
        }
      }
      printf("%lld\n",ans);
    }
  }
  return 0;
}
