#include <stdio.h>
int main(void)
{
    float n, r;
    scanf("%f", &n);
    if(n * 95 >= 300)
    {
        r = (n * 95) * 0.85;
    }
    else
    {
        r = n * 95;
    }
    printf("%.2f", r);
    return 0;
}