#include <stdio.h>
#include <math.h>
#define PI 3.1415926535
int main(void)
{
    float r; 
    double result;
    scanf("%f", &r);
    result = PI * r * r;
    if(result <= 100)
    {
        printf("%lf", result);
    }
    return 0;
}