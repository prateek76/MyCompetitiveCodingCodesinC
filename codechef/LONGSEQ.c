#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  //var declared
  int T,i,flag;
  char arr[1000005];
  //input
  scanf("%d",&T);
  //test cases
  while (T--) {
    //var
    int cnt0=0,cnt1=0;
    scanf("%s",arr);
    for (i=0;i<strlen(arr);i++) {
      if(arr[i] == '1'){
        cnt1++;
      } else {
        cnt0++;
      }
    }
    if (cnt0 == 1 || cnt1 == 1) {
      flag = 1;
    } else {
      flag = 0;
    }
    if (flag == 1) {
      printf("Yes\n");
    } else {
      printf("No\n");
    }
  }
  return 0;
}
