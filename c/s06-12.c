#include <stdio.h>
int main(void)
{
    int input;
    int r = 0;
    do
    {
        scanf("%d", &input);
        if(input > 0)
        {
            r += input;
        }
    }while(input > 0);
    printf("%d", r);
    return 0;
}