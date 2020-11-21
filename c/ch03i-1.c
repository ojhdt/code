#include <stdio.h>
#include <math.h>
int main(void)
{
    int n;
    double x;
    scanf("%d %lf", &n, &x);
    int j;
    double r = 1;
    for(j = 1; j <= n; j++)
    {
        r = r * (-1) * ((double)(j*2-1)/(2*j));
    }
    r = r * (pow(x, (double)n * 2 + 1)/(double)(2*n+2));
    return 0;
}