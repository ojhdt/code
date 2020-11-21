#include <stdio.h>
int main(void)
{
    char ch;
    printf("Press a key and then press Enter:");
    ch = getchar();//返回ASCII码
    ch += 32;
    putchar('\n');//相当于敲一下回车
    putchar(ch);
    return 0;
}

//putchar就是阉割版printf，只能输单个字符，输多个也只读取第一个