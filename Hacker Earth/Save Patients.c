#include<stdio.h>

int main(){
int N,arr1[100006],flag,arr2[100006],i;
scanf("%d",&N);
for(i=0;i<N;i++){
    scanf("%d",&arr1[i]);
}
for(i=0;i<N;i++){
    scanf("%d",&arr2[i]);
}
for(i=0;i<N;i++){
    if(arr1[i] < arr2[i]){
        flag = 1;
        break;
    }
}
if(flag == 1){
    printf("No");
}
else{
    printf("Yes");
}
return 0;
}
