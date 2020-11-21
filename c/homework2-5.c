#include <stdio.h>
int main(void)
{
    int year;
    double money, rate, total;
    printf("输入存款和存期：");
    scanf("%lf %d", &money, &year);
    switch (year)
    {
    case 1:
        rate = 0.0225;
        break;
    case 2:
        rate = 0.0279;
        break;
    case 3:7
        rate = 0.0333;
        break;
    case 5:
        rate = 0.0360;
        break;
    case 8:
        rate = 0.0414;
        break;
    default:
        rate = 0.0;
        printf("输入的存期错误！\n");
        break;
    }
    total = money + money * rate * year;
    printf("从银行获得的总金额为： %.2lf\n", total);
    return 0;
}