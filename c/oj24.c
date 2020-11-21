#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, m, n;
    for(i = 1;i <= 9; i++)
    {
        printf("%-4d", i);
    }
    printf("\n_   _   _   _   _   _   _   _   _   \n");
    for(m = 1;m <= 9; m++)
    {
        for(n = 1; n <= 9; n++)
        {
            printf("%-4d",n * m);
        }
        printf("\n");
    }


    printf("\n");


    for(i = 1;i <= 9; i++)
    {
        printf("%-4d", i);
    }
    printf("\n_   _   _   _   _   _   _   _   _   \n");
    for(m = 1;m <= 9; m++)
    {
        for(n = 1; n <= m; n++)
        {
            printf("%-4d",n * m);
        }
        printf("\n");
    }

    printf("\n");

    for(i = 1;i <= 9; i++)
    {
        printf("%-4d", i);
    }
    printf("\n_   _   _   _   _   _   _   _   _   \n");
    for(m = 1;m <= 9; m++)
    {
        for(n = 1; n <= 9; n++)
        {
            if(m <= n)
            {
            printf("%-4d",n * m);
            }
            else
            {
                printf("    ");
            }
        }
        printf("\n");
    }
}