#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, a;
    for(a = 1,x = 4; x < 999;x = x + 4)
    {
        a = a - (1 / (x - 1)) + (1 / (x + 1));
    }
    printf("%f", a * 4);
}