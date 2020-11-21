#include <stdio.h>
int main(void)
{
    int a[5];
    int i, max = 0, min = 0;
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 5; i++)
    {
        if(a[max]<a[i]) max = i;
        if(a[min]>a[i]) min = i;
    }
    int temp = a[max];
    a[max] = a[min];
    a[min] = temp;
    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}