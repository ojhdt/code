#include <stdio.h>
#include <math.h>
int main(void)
{
    float a, b, c, x, y ,d ,e;
    printf("Input a, b, c:");
    scanf("%f, %f, %f",&a ,&b, &c);

    d = b * b - 4 * a * c;
    e = -b;

    printf("Text output:d = %f, e = %f, ", d, e);

    x = -b - sqrt(b * b - 4 * a * c);
    y = -b + sqrt(b * b - 4 * a * c);
    printf("Final: x = %f, y = %f",x ,y);
    return 0;
}