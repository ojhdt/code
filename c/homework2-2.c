#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int cj;
    scanf("%d", &cj);
    if(cj < 0 || cj > 100)
    {
        printf("数据输入错误");
        exit(0);
    }
    if(cj >= 90 && cj <= 100) printf("优\n");
    else if(cj >= 80 && cj < 90) printf("良\n");
    else if(cj >= 70 && cj < 80) printf("中\n");
    else if(cj >= 60 && cj < 70) printf("及格\n");
    else
    {
        printf("不及格\n");
    }
    return 0;
}