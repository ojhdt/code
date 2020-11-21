#include <stdio.h>
#include <math.h>
int Xx(int n);
int main(void)
{
    int n, m = 1, o = 0;
    scanf("%d", &n);
    while(o < n)
    {
        o = o + Xx(m);
        m = m + 1;
    }
    printf("%d", m - 2);
    /*printf("%d", Xx(2));
    printf("%d", Xx(4));*/
    return 0;
}

int Xx(int n)
{
    int i,r = 1;
    for(i = 1;i <= n; i++)
    {
        r = r * i;
    }
    return r;
}