#include<stdio.h>

int main()

{
    int t,N,M,K,i,j,k,sum=0;
    int matrixa[101][101];
    int matrixb[101][101];
    int ans[100][100];
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&N,&M,&K);
        for(i=0;i<N;i++){
            for(j=0;j<M;j++){
                scanf("%d",&matrixa[i][j]);
            }
        }
        for(i=0;i<M;i++){
            for(j=0;j<K;j++){
                scanf("%d",&matrixb[i][j]);
            }
        }
        for(i=0;i<N;i++){
            for(j=0;j<K;j++){
                for(k=0;k<M;k++){
                    sum=sum+matrixa[i][k]+matrixb[k][j];
                                    }
                                    ans[i][j]=sum;
                                    sum=0;
            }
        }
        for(i=0;i<N;i++){
            for(j=0;j<K;j++){
                printf("%d ",ans[i][j]);
            }
        }

    }

    return 0;
}
