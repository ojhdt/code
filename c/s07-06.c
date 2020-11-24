#include <stdio.h>
int Fact(int x);
int main(void)
{
    int x;
    scanf("%d", &x);
    printf("%d", Fact(x));
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