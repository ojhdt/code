#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define EPS 1e-6//浮动区间
int main(void)
{
    float a, b, c, disc, p, q;
    printf("Please enter the coefficients a, b, c:");
    scanf("%f, %f, %f", &a, &b, &c);
    if (fabs(a) <= EPS)//fabs()输出绝对值
    {
        printf("It is not a quadratic equation!\n");
        exit (0);//需要调用stdlib.h
    }
    disc = b * b - 4 * a * c;
    p = -b / (2 * a);
    q = sqrt(fabs(disc)) / (2 * a);
    if(fabs(disc) <= EPS)//!!!!!重要比较，是否等于0近似替代
    {
        printf("x1 = x2 = %.2f\n", p);
    }
    else
    {
        if(disc > EPS)
        {
            printf("x1 = %.2f, x2 = %.2f\n", p + q, p - q);
        }
        else
        {
            printf("x1 = %.2f + %.2fi, ", p, q);
            printf("x2 = %.2f - %.2fi\n", p, q);
        }
        
    }
    return 0;
}