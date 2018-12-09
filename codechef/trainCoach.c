#include <stdio.h>

int main()
{
	int T,N,i,d=8;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&N);
		for ( i = 0; i < 70; ++i){
			if (N == 1+i*d || N == 4+i*d){
				if (N == 1+i*d){
					N += 3;
				}else{
					N -= 3;
				}
				printf("%dLB\n",N);
				break;
			}
			else if (N == 2+i*d || N == 5+i*d){
				if (N == 2+i*d){
					N += 3;
				}else{
					N -= 3;
				}
				printf("%dMB\n",N);
				break;
			}
			else if (N == 3+i*d || N == 6+i*d){
				if (N == 3+i*d){
					N += 3;
				}else{
					N -= 3;
				}
				printf("%dUB\n",N);
				break;
			}
			else if (N == 7+i*d){
					N += 1;
					printf("%dSU\n",N);
					break;
				}
				
			
			else if (N == 8+i*d){
					N -= 1;
					printf("%dSL\n",N);
					break;
				}
				
			}
			
	}
	return 0;
}