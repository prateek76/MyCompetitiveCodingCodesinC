#include <stdio.h>

int main()
{
    int N,T,i,d=12;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        for(i=0;i<=8;i++){
            if(N==6+d*i||N==7+d*i){
                if(N==6+d*i){
                    N+=1;
                }
                else{
                    N-=1;
                }
                printf("%d WS\n",N);
                break;
            }
            else if(N==5+d*i||N==8+d*i){
                if(N==5+d*i){
                    N+=3;
                }
                else{
                    N-=3;
                }
                printf("%d MS\n",N);
                break;
            }
            else if(N==4+d*i||N==9+d*i){
                if(N==4+d*i){
                    N+=5;
                }
                else{
                    N-=5;
                }
                printf("%d AS\n",N);
                break;
            }
            else if(N==3+d*i||N==10+d*i){
                if(N==3+d*i){
                    N+=7;
                }
                else{
                    N-=7;
                }
                printf("%d AS\n",N);
                break;
            }
            else if(N==2+d*i||N==11+d*i){
                if(N==2+d*i){
                    N+=9;
                }
                else{
                    N-=9;
                }
                printf("%d MS\n",N);
                break;
            }
            else if(N==1+d*i||N==12+d*i){
                if(N==1+d*i){
                    N+=11;
                }
                else{
                    N-=11;
                }
                printf("%d WS\n",N);
            }
            
        }
        
    }
    return 0;
}
