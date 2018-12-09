#include <stdio.h>

int main() {

	int n;
	char arr[1000][1000];
	scanf("%d",&n);
	for(int i=0;i<n;i++) {

		for (int j=0;j<100;j++)
		{
			
			scanf("%s",arr[i][j]);
			if (arr[i][j] == '\0')
			{
				break;
			}

		}

	}

	for(int i=0;i<n;i++) {}
			
			printf("%s\n",arr[i][]);
		

	}


	return 0;
	
}