#include <stdio.h>
#include <math.h>
int main(void)
{
    char s, p, e;
    int f, m;
    float result, t = 1;
    scanf("%c\n%d %d\n%c\n%c", &s, &f, &m, &p, &e);
    if(s == "M")
    {
        result = (f + m) * 0.54;
        if(p == "Y")
        {
            t += 0.02;
        }
        if(e == "Y")
        {
            t += 0.015;
        }
        result = result * t;
    }
    if(s == "F")
    {
        result = f * 0.923 + m * 0.54;
        if(p == "Y")
        {
            t += 0.02;
        }
        if(e == "Y")
        {
            t += 0.015;
        }
        result = result * t;
    }
    printf("%f", result);
    return 0;
}