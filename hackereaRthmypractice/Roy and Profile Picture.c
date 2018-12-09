//partially accepted

#include<stdio.h>

int main()
{
    int W,H,L,N;
    scanf("%d",&L);
    scanf("%d",&N);

    while(N--){
        scanf("%d %d",&W,&H);
        if(W<L||H<L){
            printf("UPLOAD ANOTHER\n");
        }
        
        else if(W>=L&&H>=L&&W==L){
            printf("ACCEPTED\n");

        }
        else if(W>L&&H>L&&W!=L){
            printf("CROP IT\n");

        }
        
        
        

    }





    return 0;
}