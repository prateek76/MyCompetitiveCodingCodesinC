#include<stdio.h>

int main()
{
    int T,N,i,j,cnt=0,cnt2=0;
    char aib[200005];
     scanf("%d",&T);
     while(T--){
         scanf("%d",&N);
         scanf("%s",aib);
         for(i=0;i<N;i++){
             for(j=0;j<N;j++){
                 if(aib[i]==a[j]){
                     cnt++;
                     if(cnt%2!=0){
                         cnt2++;
                         
                     }
                 }
             }
         }

     }






    return 0;
}