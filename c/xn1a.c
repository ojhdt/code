#include <stdio.h>
int main(void)
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    printf("%.3f", (a+b+c)/3);
    return 0;
}