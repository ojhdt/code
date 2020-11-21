#include <stdio.h>
unsigned int MyStrlen(const char *pStr);
int main(void)
{
    char a[80];
    printf("Input a string:");
    gets(a);
    printf("The length of the string is: %u\n", MyStrlen(a));
    return 0;
}

unsigned int MyStrlen(const char *pStr)
{
    unsigned int len = 0;
    for ( ;*pStr !='\0'; pStr++)
    {
        len++;
    }
    return len;
}