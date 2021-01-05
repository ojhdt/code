#include <stdio.h>
char * Cat(char *dstStr, char *srcStr);
int main(void)
{
    char a[99], b[99];
    gets(a);
    gets(b);
    printf("%s", Cat(a, b));
    return 0;
}

char * Cat(char *dstStr, char *srcStr)
{
    char *pStr = dstStr;
    while (*dstStr != '\0')
    {
        dstStr ++;
    }
    for(;*srcStr != 0; srcStr++, dstStr++)
    {
        *dstStr = *srcStr;
    }
    *dstStr = '\0';
    return pStr;
}