#include<stdio.h>

void merge(int arr[],int start,int mid,int end) {

    int i,j,k;
    int n1 = mid - start + 1;
    int n2 = end - mid;
    //temp array
    int L[n1],R[n2];

    for(i = 0; i < n1 ; i++) {
        L[i] = arr[start+1];
    }
    for(j=0;j<n2;j++) {
        R[j] = arr[mid+1+j];
    }
    i=0,j=0,k=start;

    while(i<n1 && j<n2) {
        if(L[i]<= R[j]) {
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
    while(i<n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
    

}

void mergeSort(int arr[],int start,int end) {

    if(start<end){
        int mid = start +(end-1)/2;

        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);

        merge(arr,start,mid,end);
    }
}

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        int arr[1000006];
        for(int i=0;i<n;i++) {
            scanf("%d",&arr[i]);
        }
        mergeSort(arr,0,n-1);
        for(int i=0;i<n;i++) {
            printf("%d ",arr[i]);
        }
    }

    return 0;
}
