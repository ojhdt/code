#include <stdio.h>
int main(void)
{
    int m = 5;
    printf("m / 2 = %d\n", m / 2);
    printf("(float)(m / 2) = %f\n", (float)(m / 2));
    printf("(float)m / 2 = %f\n", (float)m / 2);
    printf("m = %d\n", m);//不改变m本身数据类型，只在计算时改变m的值的类型
    return 0;
}