#include<stdio.h>

int main(){
	long long int T,N,A1[100000],A2[100000],A3[100000],i;
	scanf("%lld",&T);
	while(T--){
		long long cnt = 0;
		long long int sum = 0;
		scanf("%lld",&N);
		A1[0] = 0;
		for (i = 1; i <= N; ++i){
			scanf("%lld",&A1[i]);
		}
		for(i = 1; i <= N; ++i){
			A3[i] = A1[i]-A1[i-1];
		}
		for (i = 1; i <= N; ++i){
			scanf("%lld",&A2[i]);
		}
		for (i = 1; i <= N; ++i){
			if (A3[i] >= A2[i]){
				cnt++;
			}	
		}
		printf("%lld\n",cnt);
	}
	return 0;
}