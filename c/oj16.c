#include <stdio.h>
#include <math.h>
int main(void)
{
    int y, m;
    scanf("%d %d", &y, &m);
    if(y < 1 || y > 3000)
    {
        printf("error");
    }
    else if(y % 4 == 0 && m == 2)
    {
        printf("29");
    }
    else
    {
        if(m < 1 || m > 12)
        {
            printf("error");
        }
        else if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        {
            printf("31");
        }
        else if(m == 4 || m == 6 || m == 9 || m == 11)
        {
            printf("30");
        }
        else
        {
            printf("28");
        }
    }
    return 0;
    
}