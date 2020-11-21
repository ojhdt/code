#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int magic, guess, counter = 0, ret;
    char reply;
    srand(time(NULL));
    do
    {
        counter = 0;
        magic = rand() % 100 + 1;
        do
        {
            ret = scanf("%d", &guess);//成功输入数值个数
            while(ret != 1)
            {
                while(getchar() != '\n')
                {
                    ret = scanf("%d", &guess);
                }
            }
            counter++;
            if(guess > magic)
                printf("Too big\n");
            else if(guess < magic)
                printf("Too small\n");
            else
                printf("Right\n");
            
        } while (guess != magic && counter < 10);
        printf("Reply?");
        scanf(" %c", &reply);
        
    } while (reply == 'Y' || reply == 'y');
    return 0;
    
}