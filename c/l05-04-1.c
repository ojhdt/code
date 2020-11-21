#include <stdio.h>
#include <math.h>
int main(void)
{
    int x, i, j, k;
    scanf("%d", &x);
    int l = 2 * x - 1;
    int a[x][x];
    int max = x * x;
    for(;l > 0; l--)
    {
        if(l % 2 == 0)
        {
            if(l > x)
            {
                j = x;
                k = x - abs(l-x);
            }
            else
            {
                j = x - abs(l-x);
                k = x;
            }
            for(;j >=1 && k >= 1;j--,k--)
            {
                a[j-1][k-1] = max;
                max--;
            }
        }
        else
        {
            if(l > x)
            {
                j = abs(l-x) + 1;
                k = 1;
            }
            else
            {
                j = 1;
                k = abs(l-x) + 1;
            }
            for(;j <=x && k <= x;j++,k++)
            {
                a[j-1][k-1] = max;
                max--;
            }
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