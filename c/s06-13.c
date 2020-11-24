#include <stdio.h>
int main(void)
{
    int input, sum, count = 0;
    do
    {
        scanf("%d", &input);
        if(input > 0)
        {
            sum += input;
            count++;
        }
    } while (input != 0);
    printf("sum=%d\ncount=%d", sum, count);
    return 0;
}