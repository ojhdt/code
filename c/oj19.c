#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, n = 0;
    for(i = 1;i <= 21;i++)
    {
        if(5 * i % 6 == 0)
        {
            n++;
        }
        if(5 * i % 7 == 0)
        {
            n++;
        }
        if(6 * i % 7 == 0)
        {
            n++;
        }
    printf("%d", n);
    }
    return 0;
}