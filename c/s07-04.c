#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a < b)
    {
        int temp = a;
        a = b;
        b =  temp;
    }
    int an = a;
    int bn = b;

    while(b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    printf("%d", an * bn / a);
    return 0;
}