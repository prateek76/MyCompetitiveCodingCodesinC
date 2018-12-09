#include<stdio.h>
#include<math.h>

int main(){

	int T,N,M,K,var1;
	scanf("%d",&T);
	while(T--){
		scanf("%d %d %d",&N,&M,&K);
		if (N == M){
			var1 = 0;
		}
		else if(abs(N-M)>=K){
			var1 = abs(N-M) - K;
		}
		else if (abs(N-M)<K){
			var1 = K - abs(N-M);
			if (var1%2 == 0){
				var1 = 0;
			}
			else if(var1%2 == 1){
				var1 = 1;
			}
		}
		printf("%d\n",var1);
	}
	return 0;
}