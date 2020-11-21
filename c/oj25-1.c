#include <stdio.h>
#include <math.h>
int main(void)
{
    int n, i, m, a;
    long p, t;
    scanf("%d", &n);
    for(m = 1; t < n; m++)
    {
        for(a = 1, p = 1; a <= m; a++)
        {
            for(i = 1; i <= a; i++)//p为a的阶乘
            {
                p = p * i;
            }
            t = t + p;//进行一次循环后，将结果堆叠
        }   
    }
    printf("%d", m - 1);
    return 0;
}