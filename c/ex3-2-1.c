#include <stdio.h>
#define ABC 3.14159 //直接命令内字符串替换，没有数据类型
int main(void)
{
    double c, r;
    printf("Input r here: ");
    scanf("%lf", &r);
    c = 2 * ABC * r;
    printf("Result: %lf", c);
}