#include <stdio.h>
double Nn(int n);
int Xx(int x);
int main(void)
{
    int i = 0;
    double j = 1;
    do
    {
        i++;
        j = j + Nn(Xx(i));
    } while (Nn(Xx(i)) >= 1e-5);
    printf("%lf %d", j, i + 1);
}

int Xx(int n)
{
    int i,r = 1;
    for(i = 1;i <= n; i++)
    {
        r = r * i;
    }
    return r;
}

double Nn(int n)
{
    double result;
    result = (double)1 / n;
    return result;
}