#include <stdio.h>
#include <math.h>
int main(void)
{
    double h, w, t;
    scanf("%lf %lf", &h, &w);
    t = w / (h * h);
    if(t < 18) printf("too thin");
    else if(t >= 18 && t < 25) printf("normal");
    else if(t >= 25 && t < 27) printf("overweight");
    else printf("fat");
    return 0;
}