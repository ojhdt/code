#include <stdio.h>
int main(void)
{
    int x, i, j, k;
    scanf("%d", &x);
    int max = x * x;
    int a[x][x];
    for(i = x ; i > 0; i--)
    {
        for(j = i, k = 1; j <= x; j++, k++)
        {
            a[j-1][k-1] = max;
            max--;
        }
    }

    for(i = 2; i <= x; i++)
    {
        for(j = 1, k = i; k <= x; j++, k++)
        {
            a[j-1][k-1] = max;
            max--;
        }
    }

    for(i = 0; i < x; i++)
    {
        for(j = 0; j < x; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}