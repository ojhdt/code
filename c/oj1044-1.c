#include <stdio.h>
int main(void)
{
    int n, i;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /*for(i = 0; i < n; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }*/

    int j, d = 1, r = 1;
    for(j = 0; j < n - 1;j++)
    {
        if(a[j+1] > a[j])
        {
            d++;
        }
        else
        {
            d = 1;
        }
        

        if(d > r)
        {
            r = d;
        }
    }
    printf("%d", r);
    return 0;
}