#include <stdio.h>
int main(void)
{
    int i = 0;
    float a, result = 1;
    scanf("%f", &a);
    do
    {
        i++;
        result = result * (1 + a);
    } while (result < 2);
    printf("%d", i);
}