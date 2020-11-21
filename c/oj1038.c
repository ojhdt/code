#include <stdio.h>
int Plus(int n);
int main(void)
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        printf("%d\n", Plus(n));
    }
    return 0;
}

int Plus(int n)
{
    int i, temp, r;
    for(i = 1, r = 0; i <= n; i++)
    {
        scanf("%d", &temp);
        r = r + temp;
    }
    return r;
}