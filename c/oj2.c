#include <stdio.h>
#include <math.h>
int main(void)
{
    int a, b, u, t, h, result;
    scanf("%d", &a);
    b = fabs(a);
    u = b / 1 % 10;
    t = b / 10 % 10;
    h = b / 100 % 10;
    result = u * 100 + t * 10 + h * 1;
    printf("%d", result);
    return 0;
}