#include <stdio.h>
#include <math.h>
int main(void)
{
    int x, i = 1, w = 0;
    scanf("%d", &x);
    while(i < x)
    {
        i = i * 10;
        //w++;
    }
    i = i / 100;
    for(; i > 0; i = i /10)
    {
        int a = x / i % 10;
        w += a * i;
    }
    printf("%d", w);
    return 0;
}