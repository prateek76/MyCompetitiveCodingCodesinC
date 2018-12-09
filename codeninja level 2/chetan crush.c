#include <stdio.h>

int main()
{	
	int T,N,Q,A[i],i,L,R,ans=0;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&N);
		for ( i = 1; i <= N; ++i){
			scanf("%d",&A[i]);
		}
		scanf("%d",&Q);
		while(Q--){
			scanf("%d %d",&L,&R);
			for ( i = L; i <= R-1; ++i)
			{
				ans ^= A[i];
			}
			printf("%d\n",ans);
		ans = 0;
		}
		
	}
	return 0;
}//partially accepted