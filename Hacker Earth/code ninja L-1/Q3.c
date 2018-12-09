#include <stdio.h>

int main()
{
    int T,N,i,temp,swapped;
    int arr[2000];
    scanf("%d",&T);
    while(T--){
       scanf("%d",&N);
       for(i=0;i<N;i++){
           scanf("%d",&arr[i]);
           
       }
 while(1){
        swapped=0;

        for(i=0;i<N;++i){
         if(arr[i]>arr[i+1]){
         temp=arr[i];
         arr[i+1]=arr[i];
         arr[i+1]=temp;
         swapped=1;

        }
        }
        if(swapped==0){
            break;
        }
    }
    for(i=0;i<N;++i){
        if(arr[i]+arr[N]==arr[i+1]+arr[N-2]){
            printf("YES\n");

        }
        else{
            printf("NO\n");
        }
    }
    }



    return 0;
}
