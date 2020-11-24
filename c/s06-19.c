#include <stdio.h>
#include <math.h>
int main(void)
{
    double a, b, c, i;
    for(i = 1, a = 0, c = 0.01, b = 0;i <= 30;i++)
    {
        a = a + c;
        c = 2 * c;
        b = b + 100000;
    }
    printf("百万富翁给陌生人: %lf元\n陌生人给百万富翁: %lf元", a, b);
    return 0;
}

