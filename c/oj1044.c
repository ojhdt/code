#include <stdio.h>
int main(void)
{
    int n, i, temp, data, d, r;
    scanf("%d", &n);
    i = 1, d = 1, r = 1;
    while(i <= n)
    {
        printf("i=%d\n", i);
        scanf("%d", &temp);
        if(i = 1) data = temp;
        else
        {
            if(temp > data)
            {
                d++;
                data = temp;
            }
            else
            {
                d = 1;
                data = temp;
            }
        }
        i = i + 1;
    }
    printf("%d", r);
    return 0;
}