#include <stdio.h>

int main()
{
	int N,i,arr[1000006],K,temp;
	scanf("%d",&N);
	for (i = 0; i < N; ++i)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&K);
	for ( i = 0; i < N; ++i)
	{
		if (arr[i] == K)
			break;	
	}
	printf("%d\n",i);
	return 0;
}