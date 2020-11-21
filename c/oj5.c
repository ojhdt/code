#include <stdio.h>
#include <math.h>
int main(void)
{
    double h, w, t;
    scanf("%lf %lf", &h, &w);
    t = w / (h * h);
    if(t < 18)
    {
        printf("underweight");
    }
    else if(t >= 18 && t < 25)
    {
        printf("normal");
    }
    else if(t >= 27)
    {
        printf("obese");
    }
    else
    {
        printf("overweight");
    }
    return 0;
}