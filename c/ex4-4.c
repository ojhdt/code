//空格也可被接受赋给字符串%c
#include <stdio.h>
int main(void)
{
    int a;
    char b;
    float c;
    printf("Please input an interer:");
    scanf("%d", &a);
    printf("integer: %d\n", a);
    printf("Please input a character:");
    scanf(" %c", &b);//加一个空格
    printf("character: %c\n", b);
    printf("Please input a float number:");
    scanf("%f", &c);
    printf("float: %f\n", c);
    return 0;
}