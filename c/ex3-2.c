#include <stdio.h>
int main(void)
{
    //double r = 5.3;双精度实型
    double r;
    scanf("%lf", &r);//%lf双精度实型输出
    printf("circumference = %f\n", 2 * 3.14159 * r);//%f浮点数输出，浮点数即实型
    printf("area = %f\n", 3.14159 * r * r);
    return 0;
}
//&取地址运算符，指定输入数据存放变量地址