#include <stdio.h>

int main()
{
    int i,pl,temp,ans=0;
    int N;
    int n[N];
    scanf(" %d",&N);
    for(i=0;i<N;++i){
        scanf(" %d",&n[i]);
    }
    while(1){
    pl=0;
    for(i=0;i<N;++i){
        if(n[i]<n[i+1]){
            temp=n[i+1];
            n[i+1]=n[i];
            n[i]=temp;
            pl=1;
        }
    }
    if(pl==0){
            break;
            }

         }

     for(i=0;i<2;++i){
    ans+=n[i];}
    printf("%d",ans);
    return 0;
}
