#include<stdio.h>

int main()
{
	int arr[1000006],N,q,i,x;
	scanf("%d",&N);
	int low = 1,mid,high = N;
	for (i = 1; i <= N; ++i)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&q);
	while(q--){
		scanf("%d",&x);
		while(low<=high){
			mid = (low + high)/2 ;
			if(x>arr[mid]){
				low = mid + 1;
			}
			else if(x<arr[mid]){
				high = mid - 1;
			}
			else{
				printf("%d\n",mid);
				low = 1;
				high = N;
				break;
			}
		} 

	}

	return 0;
}