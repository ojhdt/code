#include <stdio.h>
#include <math.h>
int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    double d = (double)(b * b - 4 * a * c);
    //printf("%.2lf\n", d);
    if(d >= 0)
    {
        double x1, x2;
        x1 = (double)(-b + sqrt(d))/ 2 * a;
        x2 = (double)(-b - sqrt(d))/ 2 * a;
        printf("%.2lf %.2lf", x1, x2);
    }
    else
    {
        double x, y;
        x = (double)(-b)/ (2*a);
        y = sqrt(-d) / (2*a);
        printf("%.2lf+i*%.2lf\n", x, y);
        printf("%.2lf-i*%.2lf\n", x, y);
    }
    
    return 0;
}