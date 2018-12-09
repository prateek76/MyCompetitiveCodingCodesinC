#include<stdio.h>
 
int main(){
	int T,N;
	char S[100005];
	scanf("%d",&T);
	while(T--){
		int cntR=0,cntB=0,cntG=0,i,max,ans;
		scanf("%d",&N);
		scanf("%s",S);
		for (i=0;i<N;++i){
			if (S[i] == 'R'){
				cntR++;
			} else if (S[i] == 'B'){
				cntB++;
			} else {
				cntG++;
			}
		}
		if (cntG == cntR && cntG == cntB){
			max = cntB;
		} else if (cntR>cntB && cntR>cntG){
			max = cntR;
		} else if (cntG>cntB && cntG>cntR){
			max = cntG;
		} else if (cntB>cntG && cntB>cntR){
			max = cntB;
		}  else if (cntR == cntB && cntR != cntG){
			max = cntR;
		} else if (cntR == cntG && cntR != cntB){
			max = cntR;
		} else if (cntB == cntG && cntB != cntR){
			max = cntB;
		} 
		ans = (cntG + cntB + cntR) - max;
		printf("%d\n",ans);
	}
	return 0;
} 