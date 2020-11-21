#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main(void)
{
    float r, v, s;
    scanf("%f", &r);
    v = 1.33333 * PI * r * r * r;
    s = 4 * PI * r * r;
    printf("%.2f\n%.2f", v, s);
    return 0;
}