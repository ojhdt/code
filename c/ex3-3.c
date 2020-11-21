#include <stdio.h>
int main(void)
{
    const double PI = 3.14159;  //coast X AB
    double r;
    printf("Input r:");
    scanf("%lf", &r);
    printf("circumference = %f\n", 2 * PI * r);
    printf("area = %f\n", PI * r * r);
    return 0;
}