#include<stdio.h>

int main(){
int N,T,fQ;
char arr[N][30];
//scanf("%s",arr[i]);
int i = 0;
scanf("%d %d",&N,&T);
while(N--){
    scanf("%s %d",&arr[i],&fQ);
    i++;
}

return 0;
}
