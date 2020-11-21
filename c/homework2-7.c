#include <stdio.h>
int main(void)
{
    int n = 100;
    for(n = 100; n <= 200; n++)
    {
        if(n % 3 != 0)
        {
            printf("%d\n", n);
        }
    }
    return 0;
}

