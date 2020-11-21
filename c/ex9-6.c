/*
void (*p)(void) 函数指针，只能指向无参无返回值的函数
void (*p1)(int, int) 另一个函数指针。能够指向两个整型参数
char (*p2)(int) 函数指针，指向有一个整型参数，一个返回值的函数
void *(*p3)(int *) 只能指向这样的函数 void *fun(int *a)
*/

#include <stdio.h>
void Select(int (*choose)(void), int *pa);
int Plus(void);
int Cut(void);
int main(void)
{
    int a;
    scanf("%d", &a);//输入a的值
    Select(Cut, &a);//函数名本身代表首地址，这里选择 Plus 或 Cut 的首地址赋给函数指针choose
    printf("a = %d", a);
    return 0;
}

void Select(int (*choose)(void), int *pa)
{
    printf("*pa = %d\n", *pa);
    int o = (*choose)();//接收返回值并储存在o中
    printf("o = %d\n", o);
    if(o == 1) *pa = *pa + 1;
    if(o == -1) *pa = *pa - 1;
}

int Plus(void)
{
    return 1;
}

int Cut(void)
{
    return -1;
}
