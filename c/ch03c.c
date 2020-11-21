#include <stdio.h>
int main(void)
{
    int lm[12];
    int y, m, d, i;
    int r = 0;
    scanf("%d %d %d", &y, &m, &d);
    if(y % 4 == 0)
    {
        int lm[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
        for(i = 0; i < (m-1); i++)
        {
            r += lm[i];
        }
    }
    else
    {
        int lm[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        for(i = 0; i < (m-1); i++)
        {
            r += lm[i];
        }
    }
    r += d;
    printf("%d\n", r);
    return 0;
}