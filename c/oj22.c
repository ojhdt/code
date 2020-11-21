#include <stdio.h>
#include <math.h>
int main(void)
{
    float a, b, c, i;
    for(i = 1, a = 0, c = 0.01, b = 0;i <= 30;i++)
    {
        a = a + c;
        c = 2 * c;
        b = b + 100000;
    }
    printf("%f\n%f", a, b);
    return 0;
}