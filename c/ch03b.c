#include <stdio.h>
int main(void)
{
    int a, b, c, d, r;
    scanf("%d %d %d", &a, &b, &c);
    d = a > b ? b : a;
    r = d > c ? c : d;
    printf("%d", r);
    return 0;
}