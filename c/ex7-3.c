#include <stdio.h>
unsigned long Fact(unsigned int n);
int main(void)
{
    int m;
    do
    {
        printf("Input m(m > 0):");
        scanf("%d", &m);
    } while (m < 0);
    printf("%d! = %lu\n", m, Fact(m));
    return 0;
}

unsigned long Fact(unsigned int n)
{
    unsigned int i;
    unsigned long result = 1;//unsigned long int
    for(i = 2;i <= n; i++)
    {
        result *= i;
    }
    return result;
}