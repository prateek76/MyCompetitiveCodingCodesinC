#include<stdio.h>
#include<math.h>

int main()
{
    long int x1,x2,y1,y2,P,T;
    scanf("%ld",&T);
    while(T--){
        scanf("%ld %ld %ld %ld %ld",&x1,&y1,&x2,&y2,&P);
        if(abs(x2-x1)+abs(y2-y1)>P){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }








    return 0;
}