#include <stdio.h>

void merge(int arr[], int start, int mid, int end)
{
    int p = start, q = mid + 1;

    int A[end - start + 1], k = 0;

    for (int i = start; i <= end; i++)
    {
        if (p > mid)
        {
            A[k++] = arr[q++];
        }

        else if (q > end)
        {
            A[k++] = arr[p++];
        }

        else if (arr[p] < arr[q])
        {
        }
    }
}

void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);

        merge(arr, start, mid, end);
    }
}

int main()
{

    return 0;
}