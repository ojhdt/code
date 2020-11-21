#include <stdio.h>
int main(void)
{
    int a, b, c, n = 9, i = 0, error;
    while(scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        error = 0;
        i++;
        do
        {
            n++;
            if(n > 100)
            {
                printf("Case %d: No answer\n", i);
                error = 1;
                break;
            }
        } while (n % 3 != a || n % 5 != b || n % 7 != c);

        if(error!=1)
        {
            printf("Case %d: %d\n", i, n);    
        }
    }
    return 0;
}