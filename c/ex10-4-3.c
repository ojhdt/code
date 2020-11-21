//*a的含义，取出a储存的地址对应的那个变量的值
#include <stdio.h>
#define N 12
int main(void)
{
    char name[N];
    char *ptr = "\"Hello\", I said to";
    /*字符指针指向字符串字面量，ptr所指向的空间中的内容不可被修改
    将字符串首地址赋值给字符指针，即可让字符指针指向一个字符串，（字符指针具有与原字符串一样的功能，可以%s输出，见行12）*/
    printf("Enter your name:");
    fgets(name, sizeof(name), stdin);//=gets(name)
    printf("%s %s. \n", ptr, name);
    return 0;
}