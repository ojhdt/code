#include <stdio.h>
int fun(char *a);
int main(void)
{
    char num[101];
    scanf("%s", &num);
    if(fun(num) == 1) printf("YES");
    if(fun(num) == 0) printf("NO");
    return 0;
}

int fun(char *a)
{
    char *f = a;
    int i = 0, j;
    int is_h = 1;
    while(*a != '\0')
    {
        a++;
        i++;
    }
    a--;
    // printf("i=%d\n", i);
    char *e = a;
    // printf("f=%c e=%c\n", *f, *e);
    for(j = 0; j < i - 1; j++)
    {
        if(*(f+j) != *(e-j))
        {
            return 0;
            is_h = 0;
            break;
        }
    }
    if(is_h == 1) return 1;
}