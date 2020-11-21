#include <stdio.h>
long Fib(int n)
{
    if(n == 1)
    {
        return 0;
    }
    else if(n == 2)
    {
        return 1;
    }
    else
    {
        return (Fib(n-1) + Fib(n-2));
    }
}

int main(void)
{
    int i;
    scanf("%d", &i);
    printf("Fib(%d): = %d", i, Fib(i));
    return 0;
}