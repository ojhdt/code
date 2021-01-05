#include<stdio.h>
int main(void)
{
    int n, i, j;
    int l = 0, r = 0;
    scanf("%d", &n);
    int a[n][n];
    for ( i = 0; i < n; i++)
    {
       for ( j = 0; j < n; j++)
       {
           scanf("%d", &a[i][j]);
       }
    }

    for(i = 0; i < n; i++)
    {
        l += a[i][i];
    }
    //printf("%d\n", l);

    for(i = 0; i < n; i++)
    {
        if(a[i] != a[n-1-i])
        {
            r += a[i][n-1-i];
        }
    }
    //printf("%d\n", r);
    printf("%d", l + r);
    return 0;
}