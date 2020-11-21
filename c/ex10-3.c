/*
"hello" 字符串表面量本身代表地址
数组名代表数组的首地址，即 list = &list[0]
*/
#include <stdio.h>
int main(void)
{
    //printf("%d", "hello");
    char str[10] = "Hello";
    char *ptr;
    ptr = str;
    printf("str = %d, ptr = %d, *ptr = %c", str, ptr, *ptr);
    return 0;
}