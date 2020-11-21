#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, n;
    float c;
    for(n = 1,i = 0;n <= 31;n++, i = i + 10)
    {
        c = 0.555555 * (i -32);
        printf("%d %f\n", i, c);
    }
    return 0;
}