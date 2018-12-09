#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,k,a[n],i;
    scanf("%d %d",&n,&k);
    if(n%2==0){
    for(i=1;i<=n/2;++i){
    a[i-1]=2i-1;
    }
    for(i=(n/2)+1;i<=n;i=i+1){
    a[i-1]=2i-n;
    }
    }
    else{
    for(i=1;i<=(n+1)/2;++i){
    a[i-1]=2i-1;
    }
    for(i=(n+1)/2;i<=n;i=i+1){
    a[i-1]=2i-(n-1);
    }
    }
    printf("%d",a[k-1]);


    return 0;
}

