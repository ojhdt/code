#include <stdio.h>
int main(void)
{
    int n, i, out = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        int in;
        scanf("%d", &in);
        if(in < 60) out++;
    }
    printf("%d", out);
    return 0;
}