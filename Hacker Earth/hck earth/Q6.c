#include<stdio.h>

int main()
{
    int T,i,j,n;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        for(i=0;i<=n;i++){
            for(j=0;j<i;j++){
                printf("*");
            }
                printf("\n");

        }
    }






	return 0;
}
