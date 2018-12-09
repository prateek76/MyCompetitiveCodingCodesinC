#include <stdio.h>
#include <string.h>

int main()
{
    int cntlen = 0;
    char S[10009];
    int SS[10009];
    scanf("%s", S);
    for (int i = 0; i < strlen(S); i++)
    {
        if ((int)S[i] % 2 == 0)
        {
            SS[i] = 1;
        }
        else
        {
            SS[i] = 0;
        }
    }
    for (int i = strlen(S) - 2; i >= 0; i--)
    {
        SS[i] = SS[i] + SS[i + 1];
    }
    for (int i = 0; i < strlen(S); i++)
    {
        printf("%d ", SS[i]);
    }
    return 0;
}