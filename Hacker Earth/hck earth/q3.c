#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N,i,r[N];
    int sum1=0,sum2=0,sum3=0;

    scanf("%d",&N);
    for(i=0;i<N;++i){
      scanf("%d",&r[N]);
    }
    for(i=0;i<N;i=i+3){
    sum1+=r[i];
    }
    for(i=1;i<N;i=i+3){
    sum1+=r[i];
    }
    for(i=2;i<N;i=i+3){
    sum1+=r[i];
    }

    printf("%d %d %d",sum1,sum2,sum3);
	return 0;
}
