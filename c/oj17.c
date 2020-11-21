#include <stdio.h>
#include <math.h>
int main(void)
{
    int x, y = 0;
    do
    {
        scanf("%d", &x);
        if(x >= 0)
        {
            y = y + x;
        }
    } while (x != 0);
    printf("%d", y);
    return 0;
}