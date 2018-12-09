#include<stdio.h>

int main()
{
    long int x,y,T,L,cnt=0;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&L);
        for(x=1;x<y;x++){
            y=(L/2)-x;
            if((x+y)*2==L){
                cnt++;
            }
        }
        printf("%d\n",cnt);
        cnt=0;
    }




    return 0;
}