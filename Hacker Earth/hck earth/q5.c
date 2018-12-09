#include<stdio.h>

int main()
{
    int N,arr[N],i;
    scanf("%d",&N);
    for(i=0;i<N;++i){
       scanf("%d",&arr[i]);
    }
    if(arr[0]!=5){
    	printf("NO");
    }
    else{
         printf("YES");
        }

	return 0;
}
