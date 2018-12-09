#include<stdio.h>
#include<string.h>

int main(){

    int N,cnt1=0,cnt2=0,cnt3=0;
    scanf("%d",&N);
    char S[1002];
    while(N--){
        scanf("%s",S);
        for(i=0;i<strlen(S);i++){
            if(S[i] == "19"){
                cnt1++;
            }
            else if(S[i] =="20"){
                cnt2++;
            }
            else{
                cnt3 = 3232;
            }
        }
    }
    return 0;
}