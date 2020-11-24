#include <stdio.h>
#include <math.h>
int main(void)
{
    double x, y, i;
    for(i = 1,x = 0, y = 1; i <= 64; i++)
    {
        x = x + y;
        y = 2 * y;
    }
    printf("%e\n%e",x ,x / (1.42 * 100000000));
    return 0;
}