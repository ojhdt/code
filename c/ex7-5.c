#include <stdio.h>
long Fib(int n);

int count = 0;//全局

int main(void)
{
    int i, x;
    scanf("%d", &i );
    x = Fib(i);//关键！！！！不然无法计算count
    printf("Fib(%d): = %d\ncount = %d", i, x, count);
    return 0;
}

long Fib(int n)
{
    
    count++;
    if(n == 1)
    {
        return 1;
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