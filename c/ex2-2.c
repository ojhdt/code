#include <stdio.h>
int main(void)
{
    int a = 1;
    float b = 2.5;
    char c = 'A';
    printf("%d\n",a);//整型输出
    printf("%f\n",b);//实型输出默认6位小数
    printf("%c\n",c);//字符输出
    printf("Something here.\n");

    printf("%d\n",b);
    printf("%c\n",b);   //不可混用输出
    return 0;
}