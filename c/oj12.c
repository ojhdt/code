#include <stdio.h>
int main(void)
{
    int x;
    x = getchar();
    if(x >=48 && x <= 57)
    {
        printf("digit");
    }
    else if(x >= 65 && x <= 90)
    {
        printf("upper");
    }
    else if(x >=97 && x <=122)
    {
        printf("lower");
    }
    else if(x == 32)
    {
        printf("space");
    }
    else
    {
        printf("other");
    }
    return 0;
}