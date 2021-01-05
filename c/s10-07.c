#include <stdio.h>
int main(void)
{
    char a[99];
    char b[99];
    gets(a);
    char *s = a;
    char *p = a;
    char *e = b;
    while(*p != '\0')
    {
        p++;
    }
    // printf("%c", p);
    for(; p != s; e++, p--)
    {
        e = p;
    }
    printf("%s", e);
    return 0;
}