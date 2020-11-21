//阶乘写法
#include <stdio.h>
int main(void)
{
    int i, n;
    long p = 1;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        p = p * i;
    }
    printf("%d! = %ld\n", n, p);
    return 0;
}