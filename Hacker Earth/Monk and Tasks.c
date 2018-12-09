#include <stdio.h>

int count_one(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{
    int T, N, arr[100006], temp;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &N);
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &arr[i]);
        }
        while (1)
        {
            int swap = 0;
            for (int i = 0; i < N - 1; i++)
            {
                if (count_one(arr[i]) > count_one(arr[i + 1]))
                {
                    temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                    swap = 1;
                }
            }
            if (swap == 0)
            {
                break;
            }
        }
        for (int i = 0; i < N; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
//use merge sort