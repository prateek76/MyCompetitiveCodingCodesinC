#include<stdio.h>

int main()
{
  unsigned long long int X;
  int i,K;
  scanf("%llu %d",&X,&K);
  int arry[50];
  int count=0;
  unsigned long long int temp=X;
  while(X!=0){
             X/=10;
             count++;
  }
  X=temp;

  for(i=0;i<count;i++){
             arry[i]=X%10;
             X/=10;
  }
  for(i=count-1;i>=count-K;i--){
             arry[i]=9;
  }
  for(i=count-1;i>=0;i--){
            printf("%d",arry[i]);
  }
  

}