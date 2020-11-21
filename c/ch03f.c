#include <stdio.h>
int main(void)
{
    int x, i, j;
    scanf("%d", &x);
    for(i = 2; i <= x ; i++)
    {
        if(x % i == 0)
        {
            //判断i是不是质数
            int is_p = 1;
            for(j = 2; j < i ; j++)
            {
                if(i % j == 0)
                {
                    is_p = 0;
                }
            }
            if(is_p == 1) printf("%d ", i);
        }
    }
    return 0;
}