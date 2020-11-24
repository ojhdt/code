#include<stdio.h>
int main(void)
{
    int x;
    scanf("%d", &x);
    if(x % 3 == 0)
    {
        printf("Wang");
    }
    else
    {
        printf("Zhang");
    }
    return 0;
}