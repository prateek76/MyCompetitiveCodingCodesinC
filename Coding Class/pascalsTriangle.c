#include<stdio.h>

//function to find factorial

int fact(int n){
  if ( n == 0 || n == 1) {
    return 1;
  }
  int pro = 1;
  while(n>=1){
    pro *= n;
    n--;
  }
  return pro;
}

//main function

int main()
{
  int i,j,n,t1,t2,t3,a1;
  scanf("%d",&n);
  for ( i = 0 ; i < n ; i++) {
    for ( j = 0 ; j <= i ; j++) {
      t1 = fact(i);
      t2 = fact(j);
      t3 = fact(i-j);
      a1 = t1/(t2*t3);
      printf("%d ",a1);
    }
    printf("\n");
  }
  return 0;
}
