#include <stdio.h>

int main()
{
	int T,M,N,hcf = 1,i,temp1,temp2,temp;
	scanf("%d",&T);
	while(T--){
		scanf("%d %d",&N,&M);
		if (M>N){
			for ( i = 1; i <= N; ++i){
				if (N%i == 0 && M%i == 0){
					hcf = i;
				}
		}
		}else if(N>M){
			for ( i = 1; i <= M; ++i){
				if (N%i == 0 && M%i == 0){
					hcf = i;
				}
		}

		}
		temp2 = M/hcf;
		temp1 = N/hcf;
		temp = temp1*temp2;

		printf("%d\n",temp);
		

	}
	return 0;
}