#include<stdio.h>

int main(){
	int T,N,i,j,arrN[1000],F,arrF[1000];
	scanf("%d",&T);
	while(T--){
		int cnt=0;
		scanf("%d",&N);
		for ( i = 0; i < N; ++i){
			scanf("%d",&arrN[i]);
		}
		scanf("%d",&F);
		for ( i = 0; i < F; ++i){
			scanf("%d",&arrF[i]);
		}
		for ( j = 0; j < F; ++j){
			for ( i = 0; i < N; ++i){
				if (arrN[i] == arrF[j]){
					cnt++;
					break;
				}
			}
		}
		if (cnt==F){
			printf("Yes\n");
		} else {
			printf("No\n");
		}
	}
	return 0;
}