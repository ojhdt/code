#include <stdio.h>
int main(void)
{
    int i, j, a[10];
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for(j = 0; j < 9; j++)
    {
        for(i = 0; i < 9; i++)
        {
            if(a[i] > a[i+1])
            {
                int temp = a[i];
                a[i] = a[i+1];
                a[i + 1] = temp;
            }
        }
    }
for(i = 0; i< 10; i++)
{
    printf("%d ", a[i]);
}

    return 0;
}