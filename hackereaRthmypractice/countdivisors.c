#include<stdio.h>

int main()
{
    int l,r,k;
    scanf("%d %d %d",&l,&r,&k);
    int i;
    int sum=0;
    for(i=l;i<r+1;i++){
    	if(i%k==0){
           sum+=1;
    	}
    }
    printf("%d",sum);

	return 0;
}