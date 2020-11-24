#include <stdio.h>
int Fact(int x);
int main(void)
{
    int x, i;
    scanf("%d", &x);
    for(i = 1; i <= x; i++)
    {
        printf("%d! = %lu\n", i, Fact(i));
    }
    return 0;
}

int Fact(int x)
{
    int i, r = 1;
    for(i = 1; i <= x; i++)
    {
        r *= i;
    }
    return r;
}