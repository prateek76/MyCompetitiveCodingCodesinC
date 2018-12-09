#include <stdio.h>

int main()
{
    long int T,N,ans;
    scanf("%ld",&T);
    while(T--){
        scanf("%ld",&N);
        if(N%2==0){
           ans=(N*N)/2;
        }
        else if(N%2==1&&N!=1){
            ans=((N*(N-1))/2)+((N+1)/2);
        }
        else if(N==1){
            ans=1;
        }
        printf("%ld\n",ans);
    }










    return 0;
}
