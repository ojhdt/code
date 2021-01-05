#include <stdio.h>
int main(void)
{
    int y, d, i, dn = 0, dout;
    int p[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int r[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d", &y, &d);
    if(y % 400 == 0 || (y % 100 != 0 && y % 4 == 0))
    {
        for(i = 0; dn < d; i++)
        {
            dn += r[i];
        }
        dn -= r[i-1];
        dout = d - dn;
        printf("%d %d", i, dout);
    }
    else
    {
        for(i = 0; dn < d; i++)
        {
            dn += p[i-1];
        }
        dn -= p[i];
        dout = d - dn;
        printf("%d %d", i, dout);
    }
    return 0;
}