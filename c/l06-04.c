#include <stdio.h>
int main(void)
{
    int i, j;
    int a[3][3];
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int *b[3][3];
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            b[i][j] = &a[j][i];
        }
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", *b[i][j]);
        }
        printf("\n");
    }
    return 0;
}