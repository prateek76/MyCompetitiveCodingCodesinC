#include<stdio.h>

//function to swap

void swap(int* a,int* b ) {
  int t = *a;
  *a = *b;
  *b = t;
}

//partition

int partition(int arr[],int low,int high)
{
  int pivot = arr[high];//that pivot
  int i = (low-1);//smaller elmnt index

   for (int j = low; j <= high - 1; j++) {
    if (arr[j] <= pivot) {
      i++;
      swap(&arr[i],&arr[j]);
    }
  }
  swap(&arr[i+1],&arr[high]);
  return(i+1);
}

//quick sort function
void quickSort(int arr[],int low,int high) {
  if (low<high) {
    int pi = partition(arr,low,high);

    quickSort(arr,low,pi-1);
    quickSort(arr,pi+1,high);

  }
}

int main()
{
  int arr[1000006];
  int i,t;
  scanf("%d",&t);
  for ( i = 0; i < t; i++) {
    scanf("%d\n",&arr[i]);
  }
  quickSort(arr,0,t-1);
  for ( i = 0; i < t; i++) {
    printf("%d\n",arr[i]);
  }
  return 0;
}
