#include<stdio.h>

int gcd(int x,int y){
  while( x != y ){
        if(x > y){
            return gcd(x-y,y);
        } else {
            return gcd(x,y-x);
        }
    }
  return x;
}

int main()
{
  int x,y;
  printf("%d\n",gcd(12,15));
  return 0;
}
