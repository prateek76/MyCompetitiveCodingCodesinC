#include<stdio.h>

int main()
{
    int N,Q;
    scanf("%d %d",&N,&Q);
    int A[100000];
    int i,L,R;
    
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    int sum=0,x;
    while(Q--){
        scanf("%d %d",&L,&R);
        x=(R-L)+1;
        for(i=L-1;i<R;i++){
           sum+=A[i]; 
           
        }
        printf("%d\n",sum/x);
        sum=0;
    }
       
       



    return 0;
}