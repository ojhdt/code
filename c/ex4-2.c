//printf("%c",ch) = putchar(ch)
#include <stdio.h>
int main(void)
{
    char ch;
    printf("Press a key and then press Enter:");
    ch = getchar();
    ch += 32;
    printf("%c, %d\n",ch ,ch);//%c字符，%d整型
    return 0;
}
//%d输出ASCII