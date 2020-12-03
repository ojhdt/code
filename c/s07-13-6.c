#include <stdio.h>
int main(void)
{
    int m, i, is_su = 1;
    scanf("%d", &m);
    for(i = 2; i < m; i++)
    {
        if(m % i == 0)
        {
            is_su = 0;
        }
    }
    if(is_su == 1)
    {
        printf("It is a prime number");
    }
    else
    {
        printf("%d=", m);
        while(m != 1)
        {
            for(i = 2;;i++)
            {
                if(m % i == 0 )
                {
                    m = m / i;
                    if(m!=1)
                    printf("%d*", i);
                    else
                    printf("%d", i);
                    break;
                }
            }
        }
    }
    
    return 0;
}