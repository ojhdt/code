#include <stdio.h>
int main(void)
{
    int a[3][4];
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 2; i >= 0; i--)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}