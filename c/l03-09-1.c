#include <stdio.h>
#include <math.h>
int main(void)
{
    double s = 10, x = -10, d = 0;
    int i;
    for(i = 0;i < 50;i++)
    {
        d = (s + x)/2;
        if((2*pow(d, 3) - 4*pow(d,2) + 3*d - 6) < 0)
        {
            x = d;
        }
        if((2*pow(d, 3) - 4*pow(d,2) + 3*d - 6) > 0)
        {
            s = d;
        }
    }
    printf("%lf", d);
    return 0;
}