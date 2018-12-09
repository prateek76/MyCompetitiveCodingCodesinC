#include<stdio.h>


int main()
{
    int N,i,n,total=0;
    int mintaxi;
    scanf("%d\n",&N);
    for(i=0;i<N;++i){
        scanf("%d",&n);
        total+=n;
    }
    if((total%4)==0){
        printf("%d",N);
    }
    else if((total%4)!=0) {
        mintaxi=((total)/4);
        printf("%d",mintaxi+1);
    }
    




    return 0;
}

