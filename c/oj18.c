#include <stdio.h>
#include <math.h>
int main(void)
{
    int x, y, z;
    for(x = 0;x <= 10; x += 1)
    {
        y = 20 - 2 * x;
        z = 30 - x - y;
        if(3 * x + 2 * y + z == 50)
        {
            printf("%d %d %d\n", x, y, z);
        }
    }
    return 0;
}