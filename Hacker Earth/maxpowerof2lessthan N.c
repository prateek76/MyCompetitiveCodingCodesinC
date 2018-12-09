#include<stdio.h>

int main(){

   int n;
   scanf("%d",&n);
   //if n is of 16 bits
   n = n|(n>>1);
   n = n|(n>>2);
   n = n|(n>>4);
   n = n|(n>>8);

   printf("%d",(n+1)>>1);
   return 0;
}
