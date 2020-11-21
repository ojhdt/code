#include <stdio.h>
#include <math.h>
int main(void)
{
    char s, p, e;
    int f, m;
    float result, t = 1;
    scanf("%c\n%d %d\n%c\n%c", &s, &f, &m, &p, &e);
    switch(s)
    {
        case'M':
            result = (f + m) * 0.54;
            break;
            
        case'F':
            result = (f * 0.923 + m) / 2;
            break;
        default:
            break;
    }
    switch(p)
    {
        case'Y':
            t += 0.02;
            break;
        default:
            break;
    }
    switch(e)
    {
        case'Y':
            t += 0.015;
            break;
        default:
            break;
    }
    result = result * t;
    printf("%f", result);
    return 0;
}