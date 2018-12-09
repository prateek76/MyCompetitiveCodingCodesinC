#include<stdio.h>

int main(){
	int T,n,L[100000],R[100000],pro[100000],i;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&n);
		for (i=1;i<=n;++i){
			scanf("%d",&L[i]);
		}
		for (i=1;i<=n;++i){
			scanf("%d",&R[i]);
			pro[i] = L[i]*R[i];
		}
		
	}
	return 0;
}