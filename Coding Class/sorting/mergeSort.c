#include<stdio.h>

//merge
void merge(int arr[],int l,int m,int r)
{
  int i,j,k;
  int n1 = m - l + 1;
  int n2 = r - m;

  //temp array's
  int L[n1],R[n2];

  //copy data to temp array to L & R
  for ( i = 0; i < n1; i++) {
    L[i] = arr[l+i];
  }
  for ( j = 0; j < n2; j++) {
    R[j] = arr[m+1+j];
  }
  i=0;
  j=0;
  k=l;
  while (i<n1 && j<n2) {
    if (L[i] <= R[j]) {
      arr[k++] = L[i++];
      //i++;
    }
    else
    {
      arr[k++] = R[j++];
      //j++;
    }
    //k++;
  }
  while (i<n1) {
    arr[k++] = L[i++];
    //i++;
    //k++;
  }
  while (j<n2) {
    arr[k++] = R[j++];
    //j++;
    //k++;
  }
}

void mergeSort(int arr[],int l,int r)
{
  if (l<r)
  {
    int m = l+(r-l)/2;

    //sort first and second halves
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);

    merge(arr,l,m,r);
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
  mergeSort(arr,0,t-1);
  for ( i = 0; i < t; i++) {
    printf("%d\n",arr[i]);
  }
  return 0;
}
