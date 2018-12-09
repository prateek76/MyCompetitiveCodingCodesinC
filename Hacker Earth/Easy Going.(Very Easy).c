#include<stdio.h>

int main(){
int T,temp,N,M,d=N-M,i,arr[100006],sorted,maxsum=0,minsum=0;
scanf("%d",&T);
while(T--){
    scanf("%d %d",&N,&M);
    for(i = 0 ; i < N ; ++i){
        scanf("%ld",&arr[i]);
    }
    while(1){
        sorted = 0;
        for(i = 0 ; i < N-1 ; ++i){
            if(arr[i]>arr[i+1]){
                temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
                sorted = 1;
            }
        }
        if(sorted == 0){
            break;
        }
    }
    for(i = 0; i < (N-M) ; ++i){
        minsum += arr[i];
    }
    for(i = N-1;i >= (M) ; i--){
        maxsum += arr[i];
    }
    printf("%d\n",maxsum-minsum);
    minsum = 0;
    maxsum = 0;
}

return 0;
}
