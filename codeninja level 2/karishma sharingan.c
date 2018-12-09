#include <stdio.h>

int main()
{
	int T,A,B,hcf = 1,i,min;
	scanf("%d",&T);
	while(T--){
		scanf("%d %d",&A,&B);
		if (A == B){
			if (A > B){
				hcf = B;
			}
			else{
				hcf = A;
			}
		}
		
		else if (A == 1 || B == 1){
			hcf = 1;
		}
		else if (B%A == 0){
			hcf = A;
		}
		else if(A%B == 0){
			hcf = B;
		}
		else if (B > A){
			for ( i = 1; i < A; ++i){
				if (A%i == 0 && (B%A)%i == 0){
					hcf = i;
				}
			}
		}
		else if (A > B){
			for ( i = 1; i < B; ++i){
				if (B%i == 0 && (A%B)%i == 0){
					hcf = i;
				}
			}
		}
		printf("%d\n",hcf);
	}
	return 0;
}