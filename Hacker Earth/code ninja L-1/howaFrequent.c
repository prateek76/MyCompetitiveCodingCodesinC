#include<stdio.h>

int main()
{
    long int N,Q,cnt=0,X,arr[1000056];
    scanf("%ld",&N);
    long int i;
    for(i=0;i<N;i++){
        scanf("%ld",&arr[i]);
    }
    scanf("%d",&Q);
    while(Q--){
        scanf("%ld",&X);
        for(i=0;i<N;i++){
            if(arr[i]==X){
                cnt++;
            }
            else{
                cnt=-1;
            }
        }
        printf("%d\n",cnt);
        cnt=0;
    }



    return 0;
}