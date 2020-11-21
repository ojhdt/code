#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float a, b;
    scanf("%f %f", &a, &b);
    if(b == 0)
    {
        exit(0);
    }
    else
    {
        printf("%.2f", a / b);
    }
    return 0;
}