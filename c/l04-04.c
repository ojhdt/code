#include <stdio.h>
#include <math.h>
int main(void)
{
    long int s, l;
    int n, i;
    scanf("%l %d", &s, &n);
    for(i = 1; i <= 10; i++)
    {
        l = s * 0.053;
        s += l;
        printf("%d %lf %lf\n", i, l, s);
    }
    return 0;
}