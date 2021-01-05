#include <stdio.h>
int main(void)
{
    int nrows, ncols, l, i, j, max = 0, sumi;
    double sum;
    scanf("%d", &nrows);
    scanf("%d", &ncols);
    scanf("%d", &l);
    int a[nrows][ncols];
    for(i = 0; i < nrows; i++)
    {
        for(j = 0; j < ncols ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < nrows; i++)
    {
        sum += a[i][l-1];
    }
    //printf("%lf\n", sum);

    for(i = 0; i < nrows; i++)
    {
        sumi = 0;
        for(j = 0; j < ncols ; j++)
        {
            sumi += a[i][j];
        }
        if(sumi > max)
        {
            max = sumi;
        }
    }
    
    printf("%lf %d", (double)(sum/nrows), max);
    return 0;
}