#include <stdio.h>
int main(void)
{
    int i, j, a;
    for(i = 1; i <= 6; i++)
    {
        a = i;
        for(j = 0; j < 6; j++)
        {
            printf("%d ", a);
            if(a != 0) a--;
        }
        printf("\n");
    }
    return 0;
}