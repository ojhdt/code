#include <stdio.h>
int main(void)
{
    int i, j, n;
    long p, sum = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        p = 1;//!!!初始化求积变量
        for(j = 1; j <= i ; j++)//计算i阶乘
        {
            p = p * j;
        }
        sum = sum + p;//累计各次阶乘结果
    }
    printf("%ld\n", n, sum);
    return 0;
}