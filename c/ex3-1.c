//取相反数运算符的优先级最高，其次是 * , / , % ，而 + ，- 的优先级最低，并且同级优先级相同
#include <stdio.h>
int main(void)
{
    int x = 153, b0, b1, b2, sum;
    b2 = x / 100;
    b1 = (x - b2 * 100)  / 10;
    b0 = x % 10;
    sum =  b2 + b1 + b0;
    printf("b2 = %d, b1 = %d, b0 = %d, sum = %d \n", b2, b1, b0, sum);//字符串必须双引

    int a = 3, b, c, d;
    a += 6;
    printf("a: %d\n",a);

    a *= 2;
    b = a;
    printf("b: %d\n",b);
    c = b++;
    printf("b++, b: %d, c: %d\n", b, c);
    d = ++b;//没用,d必等于b
    printf("++b, b: %d, d: %d\n", b, d);
}