/*
指针变量的实际意义  int * a 即定义了一个类型为int *，名称为a的变量
*par 的实际意义：取出par储存的地址对应的那个变量的值，即 arg
*/


#include <stdio.h>
void Fun(int *par);
int main(void)
{
    int arg = 1;
    printf("arg = %d\n", arg);
    Fun(&arg);
    printf("arg = %d\n", arg);
    return 0;
}

void Fun(int *par)
{
    printf("par = %d\n", par);
    *par = 2;
}