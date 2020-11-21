#include <stdio.h>

long Fact(int n)
{
    int i;
    long result = 1;
    for(i = 2;i <= n; i++)
    {
        result *= i;
    }
    return result;
}
int main(void)
{
    int m;
    long ret;
    scanf("%d", &m);
    ret = Fact(m);
    printf("%ld", ret);
    return 0;
}