#include<stdio.h>

int sumNatNum(n){
  if (n == 1) {
    return 1;
  }
  return n+sumNatNum(n-1);
}


int main()
{
 int x = sumNatNum(10);//put your number here
 printf("%d",x);
  return 0;
}
