#include <stdio.h>
#include <stdlib.h>
int Sort(int a[], int n);
int main(void)
{
    int a[63], i, o;
    for(i = 0, o = 0;i < 21; i++, o++)
    {
        a[i] = 5 * o;
    }
    for(i = 21, o = 0;i < 42; i++, o++)
    {
        a[i]= 6 * o;
    }
    for(i = 42, o = 0; i < 63; i++, o++)
    {
        a[i] = 7 * o;
    }
    o = Sort(a, 63);
    /*for(i = 0;i < o;i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }*/
    printf("%d", o);
    return 0;
}

int Sort(int a[], int n)
{
    int i, j, k,o = 0;
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1;j < n; j++)
        {
            if(a[i] == a[j])
            {
                for(k = j; k < n - 1;k++)
                {
                    a[k] = a[k + 1];
                }
                n = n - 1;
            }
        }
    }
    return n;
}