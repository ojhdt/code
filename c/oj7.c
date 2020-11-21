#include <stdio.h>
#include <math.h>
int main(void)
{
    float a;
    int b, c;
    scanf("%f %d %d",&a, &b, &c);
    printf("%f",c * pow((a+1),b));
    return 0;
}