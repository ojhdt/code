#include <stdio.h>
int main(void)
{
    int a, b, max, ret;
    printf("Input a, b:");
    ret = scanf("%d, %d", &a, &b);//scanf赋给变量整体返回数据个数
    if(ret != 2)
    {
        printf("ERROR");
        fflush(stdin);//清楚输入框缓冲区的错误数据
    }
    else
    {
        max = a > b ? a : b;//若真为a,若假为b
        printf("max = %d\n", max);
    }
    return 0;
}
//垃圾位运算不学了