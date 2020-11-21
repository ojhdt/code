#include <stdio.h>
#include <math.h>
int main(void)
{
    float x = 0;
    int i;
    for(i = 1;i <= 5;i++)
    {
        x = (x + 1000) / (1 + 0.01875 * 12);
    }
    printf("%f", x);
    return 0;
}