#include<stdio.h>

int main()
{
    char S[10000];
    int T,N,i;
    int cnt=0;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        scanf("%s",&S);
        for(i=0;i<N;i++){
            if(S[i]=='1'||S[i]=='2'||S[i]=='3'||S[i]=='4'||S[i]=='5'||S[i]=='6'||S[i]=='7'||S[i]=='8'||S[i]=='9'){
                cnt++;
            }
        }
        printf("%d\n",cnt);
        cnt=0;
    }







    return 0;
}