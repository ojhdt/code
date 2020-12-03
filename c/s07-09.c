#include <stdio.h>
static int i = 1;
int Fact(int x);
int main(void)
{
    printf("%d", Fact(10));
    return 0;
}

int Fact(int x)
{
    i++;
    x += 2;
    if(i < 5)
    {
        return (Fact(x));
    }
    else
    {
        return x;
    }
}