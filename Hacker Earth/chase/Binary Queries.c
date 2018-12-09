#include<stdio.h>

int main()
{
  long long int N,Q,L,R,i,arr[1000006],check;
  scanf("%lld %lld",&N,&Q);
  for ( i = 1; i <= N; i++) {
    scanf("%lld",&arr[i]);
  }
  while(Q--){
    scanf("%lld %lld %lld\n",&check,&L,&R);
    if(check == 1)
    {
      if (arr[L] == 0) {
        arr[L] = 1;
      }
      else {
        arr[L] = 0;
      }
    }
    if(check == 0){
      if (arr[R] == 0) {
        printf("EVEN");
      }
      else{
        printf("ODD");
      }
    }
    printf("%lld %lld %lld\n",check,L,R);
  }


  return 0;
}
#include<stdio.h>

int main()
{
  long long int N,Q,L,R,i,arr[1000006],check;
  scanf("%lld %lld",&N,&Q);
  for ( i = 1; i <= N; i++) {
    scanf("%lld",&arr[i]);
  }
  while(Q--){
    scanf("%lld %lld %lld\n",&check,&L,&R);
    if(check == 1)
    {
      if (arr[L] == 0) {
        arr[L] = 1;
      }
      else {
        arr[L] = 0;
      }
    }
    if(check == 0){
      if (arr[R] == 0) {
        printf("EVEN");
      }
      else{
        printf("ODD");
      }
    }
    printf("%lld %lld %lld\n",check,L,R);
  }


  return 0;
}
