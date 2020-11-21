#include <stdio.h>
#include <math.h>
int main(void)
{
    int n , m = 0, a = 1;
    scanf("%d", &n);
    while(a < n)
    {
        m += 1;
        a = a * m;
    }
    printf("%d", m - 1);
    return 0;
}