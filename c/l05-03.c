#include <stdio.h>
int main(void)
{
    int x, i, j, a;
    scanf("%d", &x);
    for(i = 1; i <= x; i++)
    {
        a = 1;
        for(j = 0; j < x; j++)
        {
            printf("%d ", a);
            if(a != i) a++;
        }
        printf("\n");
    }
    return 0;
}