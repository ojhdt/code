#include <stdio.h>
int main(void)
{
    int i, j;
    for(i = 0; i <= 20; i++)
    {
        for(j = 0; j <= 33; j++)
        {
            if((100-i-j) % 3 == 0 && 5*i +j*3 + (100-i-j)/3 == 100)
            {
                printf("%d %d %d\n", i, j, (100-i-j));
            }
        }
    }
    return 0;
}