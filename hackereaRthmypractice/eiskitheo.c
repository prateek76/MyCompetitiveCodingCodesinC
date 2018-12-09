#include <stdio.h>

int main()
{
    int N,X;
    int i,count=0;
    scanf("%d",&N);
    while(N--){
        scanf("%d",&X);
        for(i=1;i<=X;i++){
            if(X%i==0)
            {
                count++;
            } 
        }
        printf("%d\n",count);
        count=0;
    }
    
    return 0;
}
