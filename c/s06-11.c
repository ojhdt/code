#include <stdio.h>
int Factorial(int x);
int main(void)
{
    int i, n, r=0;
    scanf("%d", &n);
    for(i = 1; r < n; i++)
    {
        r += Factorial(i);
    }
    printf("%d", i - 2);
    return 0;
}
int Factorial(int x)
{
    int i;
    int r = 1;
    for(i = 1; i <= x; i++)
    {
        r = r * i;
    }
    return r;
}