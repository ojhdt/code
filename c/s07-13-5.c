#include <stdio.h>
int main(void)
{
    int x, i, r = 0;
    scanf("%d", &x);
    for(i = 1;r < x; i++)
    {
        r += i;
        //printf("%d\n", r);
    }
    if(r == x)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}