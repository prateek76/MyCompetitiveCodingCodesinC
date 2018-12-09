#include <stdio.h>

int main()
{
	int i,T,Q,D,flag = 0,temp;
	int arr[1000006];
	int sum[1000006];
	scanf("%d",&T);
	for(int i = 1;i <= T; i++)
	{
		scanf("%d",&arr[i]);
		sum[0] = 0;
		sum[i] = sum[i-1] + arr[i];
	}
	scanf("%d",&Q);
	while(Q--){
		scanf("%d",&D);
		for (int i = 1; i <= T; ++i)
		{
			if (sum[i] >= D)
			{
				flag = 1;
				temp = i;
				break;
			}
		
		}
		if(flag == 1){
		    printf("%d\n",temp);
		    flag = 0;
		}
		else if(flag == 0){
		    printf("-1\n");
		}
	}
	return 0;
}