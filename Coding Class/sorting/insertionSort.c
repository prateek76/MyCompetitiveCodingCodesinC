#include<stdio.h>
//insertion sort
int main()
{
  int tmp;
  int arr[6] = {2,1,5,6,7,4};
  //int pick = arr[0];
  for (int i = 1; i < 6; i++) {
    for (int j = 0; j < i; j++) {
      if (arr[i]>arr[j]) {
        tmp    = arr[j];
        arr[j] = arr[i];
        arr[i] = tmp;
      }
    }
  }
  for (int i = 0; i < 6; i++) {
    printf("%d ",arr[i]);
  }
  return 0;
}
