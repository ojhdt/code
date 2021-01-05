#include <stdio.h>
int main(void)
{
    char input;
    int max = 0, time;
    while(scanf("%c", &input) != EOF)
    {
        if(input > max)
        {
            time = 1;
            max = (int)input;
        }
        else if(input == max)
        {
            time++;
        }   
    }
    printf("%d", time);
    return 0;
}