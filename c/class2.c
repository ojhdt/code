#include <stdio.h>
int Prod(int a, int b)//定义函数
{
    int mul;
    mul = a + b;
    return mul;
}

int main(void)
{
    int c;
    c = Prod(1, 2);
    printf("%d", c);
    return 0;
}