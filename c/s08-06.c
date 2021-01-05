#include <stdio.h>
int main(void)
{
    int i, a[10], max = 0, min = 0;
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] > a[max])
        {
            max = i;
        }
        if(a[i] < a[min])
        {
            min = i;
        }
    }

    int temp = a[max];
    a[max] = a[min];
    a[min] = temp;
    for ( i = 0; i < 10; i++)
    {
        printf("%4d", a[i]);
    }
    
    return 0;
}