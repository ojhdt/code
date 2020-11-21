#include <stdio.h>
#include <math.h>
int main(void)
{
    float a;
    int x;
    scanf("%f", &a);
    while(pow((a + 1),x) < 2)
    {
        x++;
    }
    printf("%d",x);
    return 0;
}