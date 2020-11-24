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
        while(i != m)
        {
            i++
        }
    }
    
    return 0;
}