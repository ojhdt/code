#include <stdio.h>
int main(void)
{
    int a = 1, c = 2, b[5] = {3, 1}, i;
    for(i = 0; i <= 4; i++)
    {
        printf("%d\n", b[i]);
    }
    printf("%p", b);
}