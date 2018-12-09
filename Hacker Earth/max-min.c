#include <stdio.h>

int main()
{
	long long int N,i,sum=0;
	scanf("%lld",&N);
	long long int arr[1000006];
	for (int i = 0; i < N; ++i)
	{
		scanf("%lld",&arr[i]);
		sum += arr[i];
	}
	long long int min = arr[0];
	long long int max = arr[0];
	for (int i = 1; i < N; ++i)
	{
		if(arr[i] < min){
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%lld %lld",sum-max,sum-min);
	return 0;
}