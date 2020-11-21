#include<stdio.h>
int main(void)
{
    int i, j;
    char name[10][10];
    for (i = 0; i < 10; i++)
    {
        gets(name[i]);//从name[i][0]开始存字符，然后[i][1]，[i][2]...
        //scanf("%s", &name[i]);//scanf()可起到相同效果
    }
    
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            printf("name[%d][%d]=%c\n", i, j, name[i][j]);
        }
    }
    return 0;
}