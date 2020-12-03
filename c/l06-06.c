#include <stdio.h>
int fun(int *a);
int main(void)
{
    char num;
    scanf("%s", &num);
    if(fun(&num) == 1) printf("YES");
    if(fun(&num) == 0) printf("NO");

    return 0;
}

int fun(int *a)
{
    int *f = a;
    int i = 0, j;
    int is_h = 1;
    while(*a != '\0')
    {
        a++;
        i++;
    }
    printf("i=%d\n", i);
    int *e = a;
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