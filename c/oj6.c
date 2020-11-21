#include <stdio.h>
#include <math.h>
int main(void)
{
    int n, i;
    scanf("%d", &n);
    for(i = 1;i <= n;i++)
    {
        printf("%d %d\n",i * i,i * i * i);
    }
    return 0;
}