#include <stdio.h>
int Plus(int n);
int main(void)
{
    int n, m;
    while(scanf("%d\n%d",&n,&m)!=EOF)
    {
        printf("%d\n%d", Plus(n), Plus(m));
    }
}

int Plus(int n)
{
    int i, result = 0;
    for(i = 1; i <= n; i++)
    {
        result = result + i;
    }
    return result;
}