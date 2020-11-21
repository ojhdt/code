#include <stdio.h>
long Fib(int n);
int count;
int main(void)
{
    int n, i, x;
    printf("Input n:");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        count = 0;
        x = Fib(i);
        printf("Fib(%d) = %d, count = %d\n", i, x, count);
    }
    return 0;
}

long Fib(int n)
{
    count++;
    if(n == 0) return 0;
    else if(n == 1) return 1;
    else
    {
        return(Fib(n-1) + Fib(n-2));
    }
}