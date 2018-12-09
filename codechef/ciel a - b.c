#include<stdio.h>

int main()
{
	int A,B,C;
	scanf("%d %d",&A,&B);
	C = A - B;
	if(C%10 == 0 || (C+1)%10!=0){
		C = C + 1;
	}else{
		C = C - 1;
	}
	printf("%d",C);
	return 0;
}