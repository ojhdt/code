#include <stdio.h>
#include <math.h>
int main(void)
{
    int y, m;
    scanf("%d %d", &y, &m);
    int p[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int r[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    if(m < 1 || m > 12)
    {
        printf("error");
    }
    else
    {
        if(y % 4 == 0 && y % 100 != 0)
        {
            printf("%d", r[m-1]);
        }
        else if(y % 400 == 0 )
        {
            printf("%d", r[m-1]);
        }
        else
        {
            printf("%d", p[m-1]);
        }
    }
    return 0;
}