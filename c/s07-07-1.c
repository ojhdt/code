#include <stdio.h>
int main(void)
{
    int a, b, i;
    scanf("%d %d", &a, &b);
    for(i = a > b ? b : a; i >= 1; i--)
    {
        if(a % i == 0 && b % i == 0)
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}