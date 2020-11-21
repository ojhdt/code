#include <stdio.h>
int Plus(int n);
int main()
{
    int n;
    while (scanf("%d", &n) != EOF) {
        printf("%d\n", Plus(n));
    }
    return 0;
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