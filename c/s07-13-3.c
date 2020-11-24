#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    if(n < 2) printf("sum=0");
    else
    {
        int r = 2, i, j, is_su;
        for (i = 3; i < n; i++)
        {
            is_su = 1;
            //printf("i=%d\n", i);
            for(j = 2; j < i; j++)
            {
                //printf("j=%d\n", j);
                if(i % j == 0)
                {
                    is_su = 0;
                    break;
                }
            }
            if(is_su == 1)
            {
                r += i;
                //printf("r=%d\n", r);
            }
        }
        printf("sum=%d", r);
    }
    return 0;
}