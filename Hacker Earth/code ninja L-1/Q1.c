#include<stdio.h>

int main()
{
   int arr[100000];
   int T,L,R,Q,N,i,sum=0;
   scanf("%d",&T);
   while(T--){
         scanf("%d",&N);
         for(i=0;i<N;i++){
             scanf("%d",&arr[i]);
         }
         scanf("%d",&Q);
         while(Q--){
             scanf("%d %d",&L,&R);
             for(i=L-1;i<R;i++){
                 sum+=arr[i];

             }
             printf("%d\n",sum);
             sum=0;
         }
         
   }
   







   return 0; 
}