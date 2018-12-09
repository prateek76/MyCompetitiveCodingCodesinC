#include <stdio.h>

int main(void)
{
	int T,i,j,N,M,K,P,arr[1000006],cnt=0;
	scanf("%d",&T);
	while(T--){
		scanf("%d %d %d",&N,&K,&P);
		for ( i = 1; i <= K; ++i)
		{
			scanf("%d",&arr[i]);
		}
		
		for(i=1 ; i <= N ; ++i){
			for ( i = 1; i <= K; ++i)
			{
				if(i == arr[i]){
					arr[i] = arr[i+1];
				}
			}
		}
		printf("%d\n",arr[P]);
	}
	return 0;
}