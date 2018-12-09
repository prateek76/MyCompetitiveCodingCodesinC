#include<stdio.h>
#include <string.h>

int main()
{
	int T,flag = 1,rage=0;
	char X[100],Y[100];
	scanf("%d",&T);
	while(T--){
		scanf("%s",X);
		scanf("%s",Y);
		for (int i = 0; i < strlen(X) ; ++i)
		{
			if(X[i] == '?' || Y[i] == '?'){
				rage = 0;
			}
			else if (X[i] != Y[i])
			{
				flag = 0;		
			}
		}
		if (flag == 1)
		{
			printf("Yes\n");
		}
		else if (flag == 0)
		{
			printf("No\n");
			flag = 1;
		}
	}
	return 0;
}