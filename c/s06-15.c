#include <stdio.h>
int main(void)
{
    int i = 0;
    while(4 * i + 2 * (98 - i) != 386)
    {
        i++;
    }
    printf("%d %d", 98 - i, i);
    return 0;
}