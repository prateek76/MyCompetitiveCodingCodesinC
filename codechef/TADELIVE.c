#include<stdio.h>
void merge(int arr[],int l,int m,int r)
{
  int i,j,k;
  int n1 = m - l + 1;
  int n2 = r - m;

  int L[n1],R[n2];

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
    if (L[i] >= R[j]) {
      arr[k] = L[i];
      i++;
    }
    else
    {
      arr[k] = R[j];
      j++;
    }
    k++;
  }
  while (i<n1) {
    arr[k] = L[i];
    i++;
    k++;
  }
  while (j<n2) {
    arr[k] = R[j];
    j++;
    k++;
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
  int N,X,Y,arra[100006],arrb[100006];
  long long initsuma=0,initsumb=0;
  scanf("%d %d %d", &N, &X, &Y);
  for (int i = 0; i < N; i++) {
    scanf("%d",&arra[i]);
  }
  for (int i = 0; i < N; i++) {
    scanf("%d",&arrb[i]);
  }
  mergeSort(arra,0,N-1);
  mergeSort(arrb,0,N-1);
  int max;
  if( X >= Y ){
    max = X;
  } else {
    max = Y;
  }
  long long int suma = 0,sumb = 0,ans;
  for ( int i = 0; i < max; i++ ) {
    suma += arra[i];
    sumb += arrb[i];
  }

  if( suma > sumb ){
    ans = suma;
    for (int i = 0; i < N-max; i++) {
      ans += arrb[i];
    }
  }
  else{
    ans = sumb;
    for (int i = 0; i < N-max; i++) {
      ans += arra[i];
    }
  }
  printf("%lld\n",ans);
  return 0;
}
