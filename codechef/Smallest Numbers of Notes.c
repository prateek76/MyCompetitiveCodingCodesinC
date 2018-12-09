#include<stdio.h>

int main(){
	int T,N,k,count,temp;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&N);
		if(N>=100){
			temp=N;
			N = N%100;
			
			count=temp/100;
		}
		if (N>=50)
		{
			temp=N;
			N = N%50;
			
			count+=temp/50;
		}
		if(N>=10){
			temp=N;
			N= N%10;
			
			count+=temp/10;
		}
		if (N>=5)
		{
			temp=N;
			N = N%5;
		
			count+=temp/5;
		}
		if (N>=2)
		{
			temp=N;
			N= N%2;
		
			count+=temp/2;
		}
		if (N==1)
		{
			count++;
		}
		printf("%d\n",count);
		count = 0;
	}
	return 0;
}