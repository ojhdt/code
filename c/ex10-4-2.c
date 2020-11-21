//在使用数组储存字符串时，尽量用gets()和puts(),括号内的是字符串变量（字符串数组名或字符串指针）
//gets()以回车符作为字符串的终止符，同时将回车符从输入缓冲区读走，但不作为字符的一部分（输入缓冲区clear）；scanf()不读走回车符，回车符仍留在输入缓冲区中

#include <stdio.h>
#define N 12
int main(void)
{
    int i;
    char name[N];
    char *pname = name;
    gets(pname);
    puts(pname);
    printf("%s\n",pname);
    printf("%c\n", name[0]);
    printf("%c\n", name[1]);
    return 0;
}