#include <stdio.h>
int main(void)
{
    int a[10000];
    int i = 0, sum = 0, j, out = 0;
    do
    {
        scanf("%d", &a[i]);
        sum += a[i];
        i++;
    } while (a[i - 1] >= 0);
    double average = (sum - a[i-1]) / (i - 1);
    //printf("%lf\n", average);
    for(j = 0; j < (i-1); j++)
    {
        if(a[j] > average)
        {
            out++;
        }
    }
    printf("%d", out);
    return 0;
}