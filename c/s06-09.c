#include <stdio.h>
#include <math.h>
double Factorial(int x);
int main(void)
{
    double e, r = 1;
    int i;
    for(i = 1; 1/Factorial(i)>=pow(10,-5); i++)
    {
        r += 1/Factorial(i);
    }
    i++;
    r += 1/Factorial(i);
    printf("%lf %d", r, i);
    return 0;
}

double Factorial(int x)
{
    int i;
    double r = 1;
    for(i = 1; i <= x; i++)
    {
        r = r * i;
    }
    return r;
}