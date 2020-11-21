#include <stdio.h>
float Square(int x);
int main(void)
{
    int n, m, i = 0;
    float result = 0;
    while(i <= 50)
    {
        result =0;
        scanf("%d %d", &n, &m);
        if(n == 0 && m == 0)
        {
            break;
        }
        do
        {
            result = result + Square(n);
            n++;
        } while (n != m);
        result = result + Square(n);
        printf("%f\n", result);
        i++;
    }
    return 0;
}

float Square(int x)
{
    float r;
    r = (float)1/(x*x);
    return r;
}