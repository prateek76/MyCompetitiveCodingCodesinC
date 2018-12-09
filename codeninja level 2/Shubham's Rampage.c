#include <stdio.h>

int main(){
	int ID[1000006],i,j,temp,temp1,temp2,T,N,swap=0;
	scanf("%d",&T);
	while(T--){
	    int result = 0;
	    int cnt = 0;
		scanf("%d",&N);
		for ( i = 0; i < N; ++i){
			scanf("%d",&ID[i]);
			result^=ID[i];
		}
		for(i = 0; i < N; ++i){
		    if(ID[i] == result){
		        cnt++;
		    }
	    }  
		printf("%d %d\n",result,cnt);
	}
	return 0;
}