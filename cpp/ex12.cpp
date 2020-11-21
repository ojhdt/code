//随机种子srand((unsigned) time(NULL));
//由于用到了time，需要引用<time.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> /*用到了time函数，所以要有这个头文件*/
#define MAX 10
 
int main( void)
{
    int number[MAX] = {0};
    int i;
    srand((unsigned) time(NULL)); /*播种子*/
    for(i = 0; i < MAX; i++)
    {
        number[i] = rand() % 100; /*产生100以内的随机整数*/
        printf("%d ", number[i]);
    }
    printf("\n");
    return 0;
}