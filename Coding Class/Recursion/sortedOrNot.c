#include<stdio.h>

arrSorOrNot(int arr[],int n){
  if (n == 1 || n == 0) {
    return 1;
  }
  if (arr[n-1] < arr[n-2]) {
    return 0;//not sorted
  }

  return arrSorOrNot(arr,n-1);

}

arrSorOrNot1(int arr[],int n){
  if (n == 1 || n == 0) {
    return 1;
  }
  if (arr[n-1] > arr[n-2]) {
    return 0;//not sorted
  }

  return arrSorOrNot(arr,n-1);

}

int main()
{

  int arr1[5] = {1,2,3,4,5};//yes
  int arr2[5] = {1,3,2,4,5};//no
  int arr3[5] = {5,4,3,2,1};//no as we assumed strictly increasing

  if (arrSorOrNot(arr1,5) || arrSorOrNot1(arr1,5)) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }

  if (arrSorOrNot(arr2,5) || arrSorOrNot1(arr2,5)) { //not working
    printf("YES\n");
  } else {
    printf("NO\n");
  }

  if (arrSorOrNot(arr3,5) || arrSorOrNot1(arr3,5)) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }

  return 0;
}
