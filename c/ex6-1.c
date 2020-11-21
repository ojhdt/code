//while:如果循环控制表达式的值为真，则执行循环体中语句
//do-while:先执行循环体，再计算循环控制表达式的值
//for:当表达式的值为真（非0）时继续重复执行循环
#include <stdio.h>
int main(void)
{
    int i, n, sum;
    printf("Input n:");
    scanf("%d", &n);
    sum = 0;
    for(i = 1; i <+ n; i++)
    {
        sum = sum + i;
    }
    printf("sum = %d\n", sum);
    return 0;
}