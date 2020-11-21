#include <stdio.h>
#include <math.h>
int main(void)
{
    int a, x, y, z;
    for(a = 2;a <= 999; a++)
    {
        x = a / 100 % 10;
        y = a / 10 % 10;
        z = a / 1 % 10;
        if(x * x * x + y * y * y + z * z * z == a)
        printf("%d\n", a);
    }
    return 0;
}