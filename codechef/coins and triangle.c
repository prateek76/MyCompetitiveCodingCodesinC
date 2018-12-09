#include<stdio.h>

int main(){

	int T,N,i=4,count=3;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&N);
		if (N<3){
			count=1;
		}
		else if(N<6&&N>=3){
			count=2;
		}
		else if (N==6)
		{
			count=3;
		}
		else
		{
			N = N-6;
			while(N>=0){
				
				N = N-i;
				if (N<0)
				{
					break;
				}
				else{
					count++;
					i++;
				}		
		}
		}
		printf("%d\n",count);
		count=3;
		i=4;
	}
	return 0;
}