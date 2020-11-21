#include <stdio.h>
#define N 80
char *MyStrcat(char *dstStr, char *srcStr);
int main(void)
{
    char first[2*N];
    char second[N];
    printf("Input the first string:");
    gets(first);
    printf("Input the second string:");
    gets(second);
    printf("The result is: %s\n", MyStrcat(first, second));
    return 0;
}

char *MyStrcat(char *dstStr, char *srcStr)
{
    char *pStr = dstStr;//从头到尾没有变
    while(*dstStr != '\0')
    {
        dstStr++;//dstStr指针值已经发生变化，不再是首地址
    }
    while (*srcStr != '\0')
    {
        *dstStr = *srcStr;
        dstStr++;
        srcStr++;
    }
    *dstStr = '\0';
    return pStr;//返回的类型为指针，内容为地址值
    //return dstStr;
}