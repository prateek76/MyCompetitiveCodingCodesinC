/*
  ϕ(1) = 1,#gcd(1,1) is 1#
  ϕ(2) = 1,#gcd(1, 2) is 1 and gcd(2, 2) is 2#
  ϕ(3) = 2,#gcd(1, 3) is 1 and gcd(2, 3) is 1#
  ϕ(4) = 2,#gcd(1, 4) is 1 and gcd(3, 4) is 1#
  ϕ(5) = 4,#....#
  .
  .
  .
*/
#include<stdio.h>
int gcd(int a,int b){
  while(a != b){
    if (a > b) {
      return gcd(a-b,b);
    }
    else{
      return gcd(a,b-a);
    }
  }
  return a;
}
int main(){
  int n,cnt=0;
  scanf("%d",&n);
    for(int i = 1;i < n;i++){
      if (gcd(i,n) == 1) {
        cnt++;
      }
    }
    printf("%d\n",cnt);
  return 0;
}
