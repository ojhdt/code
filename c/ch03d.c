#include <stdio.h>
int main(void)
{
    double x, r = 0;
    scanf("%lf", &x);
    if(x > 0)
    {
        r += 0.1 * (x < 10 ? x : 10);
    }
    if(x > 10)
    {
        r += 0.075 * (x - 10 < 10 ? x - 10 : 10);
    }
    if(x > 20)
    {
        r += 0.05 * (x - 20 < 20 ? x - 20 : 20);
    }
    if(x > 40)
    {
        r += 0.03 * (x - 40 < 20 ? x - 40 : 20);
    }
    if(x > 60)
    {
        r += 0.015 * (x - 60 < 40 ? x - 60 : 40);
    }
    if(x > 100)
    {
        r += 0.01 * (x - 100);
    }
    printf("%.2lf", r);
    return 0;
}