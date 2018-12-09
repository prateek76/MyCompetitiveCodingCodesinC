//not accepting

#include<stdio.h>

int main()
{
	int i,N,M,Q,temp,pre_Sum[1000006];
	scanf("%d",&N);
	int low = 1,mid,high = N,arr[1000006];
	pre_Sum[0] = 0;
	for (i = 1; i <= N; ++i)
	{
		scanf("%d",&arr[i]);
		pre_Sum[i] = pre_Sum[i-1] + arr[i];
	}
	scanf("%d",&Q);
	while(Q--){
		scanf("%d",&M);
		while(low <= high){
			mid = (low + high)/2;
			if (M > arr[N])
			{
				temp = N;
				low = 1;
				high = N;
				break;
			}
			else if(M > arr[mid]){
				low = mid + 1;	
			}
			else if(M < arr[mid]){
				high = mid - 1;
			}
			else{
				temp = mid;
				low = 1;
				high = N;
				break;
			}
		}
		printf("%d %d\n",temp,pre_Sum[temp] );	
	}
	return 0;
}