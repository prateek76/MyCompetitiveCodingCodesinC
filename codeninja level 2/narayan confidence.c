#include<stdio.h>

int main()
{
	long long int T,N,i,sum=0;
	scanf("%lld",&T);
	while(T--){
		scanf("%lld",&N);
		for ( i = 1; i <= N; ++i){
			sum += i;
		}
		printf("%lld\n",sum%1000000007);
		sum = 0;
	}
	return 0;
}