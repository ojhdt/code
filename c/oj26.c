#include <stdio.h>
#include <math.h>
int main(void)
{
    int n, i, m;
    long p;
    float e = 1;
    m = 9;
    for(n = 1, p = 1; n <= m; n++)
    {
        for(i = 1; i <= n; i++)//p为a的阶乘
        {
            p = p * i;//(1*1*2*3*4*...*n= n!)
        }
        e = e + (1 / (float)p);//进行一次循环后，将结果堆叠(1+(1/1!)+(1/2!)...(1/n!))
    }
    printf("%f, %d", e, m);
    return 0;
}