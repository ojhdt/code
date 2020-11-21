#include <stdio.h>
int main(void)
{
    const double PI = 3.14159;
    double r, circum, area;
    printf("Input r:");
    scanf("%lf", &r);
    circum = 2 * PI * r;
    area = PI * r * r;
    printf("Without width or precision specifications:\n");
    printf("circumference = %f, area = %f\n", circum, area);
    printf("With width or precision specifications:\n");
    printf("circumference = %7.2f, area = %7.2f\n", circum, area); //域宽为7，精度为2，输出数据占7个字符宽度，保留2位小数
    return 0;
}