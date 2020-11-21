#include <stdio.h>
#include <math.h>
int main(void)
{
    int x, i = 1, w = 0, s;
    scanf("%d", &x);
    if(x < 0) x = -x;
    while(i < x)
    {
        i = i * 10;
        //w++;
    }
    i = i / 10;
    for(s = 1; i > 0; i = i /10, s = s * 10)
    {
        int a = x / i % 10;
        w += a * s;
    }
    printf("%d", w);
    return 0;
}