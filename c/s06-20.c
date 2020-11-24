
#include <stdio.h>
#include <math.h>
int main(void)
{
    int x = 32, y, a, b, c, d;
    do
    {
        y = x * x;
        a = y / 1000 % 10;
        b = y / 100 % 10;
        c = y / 10 % 10;
        d = y / 1 % 10;
        x = x + 1;
    }while(a != b || c != d || a == c);
    printf("%d, %d", x-1, y);
    return 0;
}