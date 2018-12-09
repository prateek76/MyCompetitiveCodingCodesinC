#include <stdio.h>
//partially  accepted
int main()
{
   long int n;
   scanf("%ld",&n);
   long int arr[100000];
   int i;
   for(i=0;i<n;i++){
       scanf("%ld ",&arr[i]);
   }
   long int sum1=0,sum2=0,sum3=0;
   for(i=0;i<n;i=i+3){
       sum1+=arr[i];
   }
   for(i=1;i<n;i=i+3){
       sum2+=arr[i];   
   }
   for(i=2;i<n;i=i+3){
       sum3+=arr[i];
   }
   printf("%d %d %d",sum1,sum2,sum3);
    return 0;
}
