#include <stdio.h>
#include <math.h>
double Num(int n, double x);
int main(void)
{
    double x, eps, result;
    int i = 1;
    int j;
    scanf("%lf %lf", &x, &eps);
    result = x;
    while(Num(i, x) >= eps)
    {
        i++;
    }
    for(j = 1; j <= i; j++)
    {
        result += Num(j, x);
    }
    printf("%.6lf", result);
    return 0;
}

//n为项数
double Num(int n, double x)
{
    int j;
    double r = 1;
    for(j = 1; j <= n; j++)
    {
        r = r * (-1) * ((double)(j*2-1)/(2*j));
    }
    r = r * (pow(x, (double)n * 2 + 1)/(double)(2*n+2));
    return r;
}