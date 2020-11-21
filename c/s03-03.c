#include <stdio.h>
int main(void)
{
    int n, i;
    double capital;
    scanf("%d %lf", &n, &capital);
    for(i = 0; i < n; i++)
    {
        capital = capital * 1.0225;
    }
    printf("%.4lf", capital);
    return 0;
}