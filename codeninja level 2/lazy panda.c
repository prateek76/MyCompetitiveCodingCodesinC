#include<stdio.h>

int main()
{
	int T,N,M,time2,ways,var1,var2,var3,mul1=1,mul2=1,mul3=1,var4,var5;
	scanf("%d",&T);
	while(T--){
		scanf("%d %d",&N,&M);
		time2 = N+M-2;
		if (N == 1 || M == 1)
		{
			ways = 1;
		}
		else{
			var1 =N+M-2;
		while((var1)>0){
		    mul1*= var1;
		    var1--;
		}
		var2 =M-1;
		while((var2)>0){
		    mul2*= var2;
		    var2--;
		}
		var3=N-1;
		while((var3)>0){
		    mul3*= var3;
		    var3--;
		}
		var4 = mul2*mul3;
		var5 = mul1/var4;
		
		
			ways = var5;
		
		}
		
		printf("%d %d\n",time2,ways );
	}

	return 0;
}