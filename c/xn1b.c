#include <stdio.h>
#include <math.h>
#define PI 3.1415926535
int main(void)
{
    double n;
    scanf("%lf", &n);
    printf("%f\n%f",sin(PI*(n/180)), cos(PI*(n/180)));
    return 0;
}