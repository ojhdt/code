#include <stdio.h>
#define PI 3.1415926535
int main(void)
{
    double r;
    scanf("%lf", &r);
    printf("%lf\n%lf", (double)4 * PI * r * r, (double)1.33333333333333 * PI * r * r * r);
    return 0;
}