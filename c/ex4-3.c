//%lf其实是%f加上l格式修饰符
//scanf不能用.n规定精度
#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);//输入格式由%d %d之间布局决定
    printf("a = %d, b = %d\n", a, b);
    return 0;
}