#include<stdio.h>

int main()
{
	int N;
	scanf("%d",&N);
    int i,j,k,flag;
	for(i=1;i<=N;i++){
		for(j=N-1;j>0;j--){
			if(N%j!=0)
			flag=1;
			k=N;
		}
		printf("%d ",k);
	}

	
    



	return 0;
}