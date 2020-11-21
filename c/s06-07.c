#include <stdio.h>
int main(void)
{
    double x, y = 1;
    int i;
    scanf("%lf", &x);
    for(i = 0; y < 2; i++)
    {
        y = y *(1 + x);
    }
    printf("When grow rate is %d%%, the output can be doubled after %d years.", (int)(x*100), i);
    return 0;
}