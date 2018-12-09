#include<stdio.h>

int main()
{
    int N,X,Y,i,r,p;

    scanf("%d %d %d",&N,&X,&Y);
    for(i=0;i<N;++i){
    	scanf("%d",&r);
         if((r<=Y)&&(r>=X)){
           p=1;
         }
    }

    if (p==1){
	printf("YES");
}
else {
	printf("NO");
    }
	return 0;
}
