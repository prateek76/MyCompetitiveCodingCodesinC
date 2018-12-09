#include<stdio.h>
#include<stdlib.h>

int main()
{
    int T,i,y;
    char name[50];
    scanf("%d",&T);

    for(i=0;i<=T;++i)
    {
        scanf(" %c",name[i]);
         y=strlen(name[i]);
    }
    for(i=0;i<=T;++i){
    printf("%d",y);
    }






    return 0;
}
