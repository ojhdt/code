#include <stdio.h>
int main(void)
{
    int p[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int r[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int y, m, d, i, output = 0;
    scanf("%d %d %d", &y, &m, &d);
    if(y % 400 == 0 || (y % 100 != 0 && y % 4 == 0))
    {
        for(i = 0; i < m-1; i++)
        {
            output += r[i];
        }
    }
    else
    {
        for (i = 0; i < m-1; i++)
        {
            output += p[i];
        }
    }
    output += d;
    printf("%d", output);
    return 0;
}