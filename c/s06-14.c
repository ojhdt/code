#include <stdio.h>
int main(void)
{
    int i, j;
    for(i = 0; i < 17; i++)
    {
        for(j = 0; j <= 25; j++)
        {
            if(3*i +2*j + (30-i-j) == 50)
            printf("%5d%5d%5d\n", i, j, 30-i-j);
        }
    }
    return 0;
}