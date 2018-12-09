#include<stdio.h>
#include<stdlib.h>

int main()
{
	int M,N,p;
	scanf("%d %d",&M,&N);
	
	if((M*N)%2==0){
		p=(M*N)/2;
		printf("%d",p);
	}
	else{
		p=((M*N)-1)/2;
		printf("%d",p);

	}
	return 0;
}