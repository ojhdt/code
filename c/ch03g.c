#include <stdio.h>
int Pow(int n, int a);
int main(void)
{
    int n, a, i, j;
    int r = 0;
    scanf("%d %d", &n, &a);
    for(i = 0; i < n; i++)
    {
        r += Pow(i, a);
    }
    printf("%d", r);
    return 0;
}

//返回n+1个a
int Pow(int n, int a)
{
    int j, r = 0;
    for(j = 0; j <= n; j++)
    {
        r += a * (int)pow(10, j);
    }
    return r;
}