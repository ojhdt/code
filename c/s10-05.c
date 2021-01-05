#include <stdio.h>
int main(void)
{
    char a[99], b;
    gets(a);
    scanf("%c", &b);
    char *p = a;
    char *s = p;
    while (*p != '\0')
    {
        if(*p == b)
        {
            char *m = p;
            while(*(m) != '\0')
            {
                *m = *(m+1);
                m++;
            }
        }
        p++;
    }
    printf("Results: %s", s);
    return 0;
}