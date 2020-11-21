#include<stdio.h>
#define N 80
void MyStrcpy(char *dstStr, char *srcStr);
int main(void)
{
    char a[N], b[N];
    printf("Input a string:");
    gets(a);
    MyStrcpy(b, a);
    printf("The copy is:");
    puts(b);
    return 0;
}

void MyStrcpy(char *dstStr, char *srcStr)
{
    while(*srcStr != '\0')
    {
        *dstStr = *srcStr;//加*读取储存的地址对应的值
        srcStr++;//指针指向一个地址，++地址+1，即切换到下一个字符的地址
        dstStr++;
    }
    *dstStr = '\0';
}