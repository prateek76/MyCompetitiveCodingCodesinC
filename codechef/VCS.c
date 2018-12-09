#include<stdio.h>

int main(){
        //declaration
    int T,N,M,K,arrayM[300],arrayK[300],i,j,flag=0;
    scanf("%d",&T);
    while(T--){
    	int cnta = 0;
        int cntb = 0;
        scanf("%d %d %d",&N,&M,&K);
        //input
        for (i=1;i<=M;++i){
        	scanf("%d",&arrayM[i]);
        }
        for (i=M+1;i<=M+K;++i){
        	scanf("%d",&arrayK[i]);
        }
        //solution
        for (i=M+1;i<=M+K;++i){
        	arrayM[i] = arrayK[i];
        }
        for(i=1;i<=M;i++){
        	for(j=M+1;j<=M+K;j++){
        		if (arrayM[i] == arrayK[j]){
        			cnta++;
        		}
        	}
        }
        for(j=1;j<=N;j++){
        	for(i=1;i<=M+K;i++){
        		if(arrayM[i]==j){
                    flag = 1;
                    break;
        		}
        	}
            if(flag==0){
                cntb++;
            }
            else{
                flag =0;
            }
        }
        printf("%d %d\n",cnta,cntb);
    }
    return 0;
}