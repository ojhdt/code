#include <stdio.h>
int main(void)
{
    int i, input, max = 0, min = 0;
    int a[10];
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 10 ; i++)
    {
        if(a[i]>a[max])
        {
            max = i;
        }
        if(a[i]<a[min])
        {
            min = i;
        }
    }
    int temp;
    temp = a[min];
    a[min] = a[max];
    a[max] = temp;
    for(i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}