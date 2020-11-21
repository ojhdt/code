#include <stdio.h>
#include <math.h>
int main(void)
{
    int x, y, z, a = 0;
    for(x = 1;x <= 5; x += 1)
    {
        y = (50 - 9 * x) / 4;
        z = 50 - x - y;
        if(10 * x + 5 * y + z == 100)
        {
            printf("%d %d %d\n", x, y, z);
            a++;
        }
    }
    printf("%d", a);
    return 0;
}