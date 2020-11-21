#include <stdio.h>
void ReadNumbers(int o[]);
void Sort(int o[]);
int main(void)
{
    int n[10] = {1,2,3,4,5,6,7,8,9,10};
    int o[9];
    int i;
    ReadNumbers(o);
    Sort(o);
    i = 0;
    while(n[i] == o[i])
    {
        i = i + 1;
    }
    printf("The missing integer is:%d", i + 1);
    return 0;
}

void ReadNumbers(int o[])
{
    int i;
    for(i = 0; i <= 8; i++)
    {
        scanf("%d", &o[i]);
    }
}

void Sort(int o[])
{
    int j, k, temp;
    for(j = 0; j < 8; j++)
    {
        for(k = j + 1;k <= 8; k++)
        if(o[j] > o[k])
        {
            temp = o[j];
            o[j] = o[k];
            o[k] = temp;
        }
    }
    o[9] = o[8];
}
