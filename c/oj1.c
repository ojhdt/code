#include <stdio.h>
#include <math.h>
int main(void)
{
    char input, result;
    input = getchar();
    if(input >= 65 && input <= 90)
    {
        result = input + 32;
        putchar(result);
    }
    else if(input >= 97 && input <= 122)
    {
        result = input - 32;
        putchar(result);
    }
    else
    {
        result = input;
        printf("%d", result);
    }
    return 0;
}