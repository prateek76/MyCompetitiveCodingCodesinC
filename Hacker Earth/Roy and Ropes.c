#include <stdio.h>

int main()
{
    int T, L, max, nwmax;
    int up[1000007], dn[1000007];
    int nw[1000007];
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &L);

        for (int i = 1; i <= L - 1; i++)
        {
            scanf("%d", &up[i]);
        }
        for (int i = 1; i <= L - 1; i++)
        {
            scanf("%d", &dn[i]);
        }
        for (int i = 1; i <= L; i++)
        {
            if (up[i] >= dn[j])
            {
                max = up[i];
            }
            else
            {
                max = dn[i];
            }
            nw[i] = i + max;
        }

        nwmax = nw[1];

        for (int i = 2; i <= L; i++)
        {
            if (nw[i] > nwmax)
            {
                nwmax = nw[i];
            }
        }
        printf("%d", nwmax);
    }
    return 0;
}