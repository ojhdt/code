#include <stdio.h>
#include <math.h>
int main(void)
{
    float h, w, a, b;
    while(scanf("%f %f %f %f", &h, &w, &a, &b) != EOF)
    {
        float x;
        float y;
        x = (float)sqrt(h * h + w * w);
        y = a < b ? a : b;
        if(y <= x)
        {
            printf("Just do it.\n");
        }
        else
        {
            printf("We have a problem.\n");
        } 
    }
    return 0;
}