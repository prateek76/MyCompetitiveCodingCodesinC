#include<stdio.h>
#include<string.h>

int main()
{
  int N,K,z,i;
  int arr[1001] = {0};

  char S[8];
  scanf("%d %d", &N, &K);

  while (K--)
  {
	scanf("%s",S);
	int cnt = 0;
	if(strcmp(S,"CLICK")==0)
	{
		int x;
		scanf("%d",&x);
		if(arr[x] == 0)
		      {
		      arr[x] = 1;
		      }

		      else
		      {
		      arr[x] = 0;
		      }
	}
	else
	{
		for ( i = 0; i < N+2; i++ )
		      {
		        arr[i] = 0;
		      }
	}
	for ( i = 1; i <= N; i++)
	    {
	      if (arr[i] == 1)
	      {
	        cnt++;
	      }
	    }
	    printf("%d\n",cnt);
	  }
  return 0;
}
