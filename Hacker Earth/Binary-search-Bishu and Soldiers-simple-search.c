#include<stdio.h>

int main()
{
	int N,i,M,Q,sum = 0,cnt = 0;
	scanf("%d",&N);
	int arr[1000006];
	for (int i = 1; i <= N; ++i)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&Q);
	while(Q--){
		scanf("%d",&M);
		for (int i = 1; i <= N; ++i)
					{
						if(arr[i] <= M){
							cnt++;
							sum += arr[i];
						}
					}
	    printf("%d %d\n",cnt,sum);
	    sum = 0;
	    cnt = 0;							
	}
	return 0;
}