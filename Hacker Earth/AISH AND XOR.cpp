#include <stdio.h>

int main()
{
    int n, Q, L, R, arr[100006],parr[100006;
    scanf("%d", &n);
    parr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] == 0)
        {
             parr[i] = parr[i-1]+1;
        }
        else
        {
            parr[i] = parr[i-1];
        }
    }
    scanf("%d", &Q);
    while (Q--)
    {
        int cnt, flag = 0;
        scanf("%d %d", &L, &R);
        cnt = parr[R]-parr[L];
        flag = R-L+1-(parr[R]-parr[L]);
        if (flag % 2 == 0)
        {
            printf("0 %d\n", cnt);
        }
        else
        {
            printf("1 %d\n", cnt);
        }
    }

    return 0;
}