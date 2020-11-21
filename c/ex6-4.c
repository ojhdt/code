#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int magic;
    int guess;
    int counter = 0;
    srand(time(NULL));
    magic = rand() % 100 + 1; //rand()生成0 ~ 32767 的整数
    do
    {
        scanf("%d", &guess);
        counter++;
        if(guess > magic)
            printf("Too high\n");
        else if(guess < magic)
            printf("Too low\n");
        else
            printf("Right\n");
    } while (guess != magic);
    printf("%d\n", counter);
    return 0;
}