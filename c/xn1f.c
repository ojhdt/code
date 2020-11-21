#include <stdio.h>
int main(void)
{
    int i, n, j, k;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(k = 1; k <= i-1; k++)
        {
            printf(" ");
        }
        for(j = 1;j <= (2*n-1-2*(i-1));j++ )
        { 
            printf("#");
        }
        printf("\n");
    }
    return 0;
}