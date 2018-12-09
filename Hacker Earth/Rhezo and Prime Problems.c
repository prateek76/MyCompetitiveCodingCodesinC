#include <stdio.h>

int isPrime(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int N, sum = 0;
    int arr[N];

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        if (isPrime(i))
        {
            sum += arr[i];
        }
    }
    printf("%d", sum);

    return 0;
}