#include <stdio.h>
void In(int *a);
void Sort(int *a);
void Out(int *a);

int main(void)
{
    int a[10];
    int i;
    In(&a);
    Sort(&a);
    Out(&a);
    return 0;
}

void In(int *a)
{
    int i;
    for(i = 0; i < 10; i++)
    {
        scanf("%d", a);
        a++;
    }
}

void Sort(int *a)
{
    int i;
    int *f = a;
    int *max = a;
    int *min = a;
    for(i = 0; i < 10; i++)
    {
        if(*max < *a)
        {
            max = a;
        }
        if(*min > *a)
        {
            min = a;
        }
        a++;
    }

    //printf("%d %d %d\n", *max, *min, *(f + 9));

	*min=*min^*f;
	*f=*min^*f;
	*min=*min^*f;

    *max=*max^*(f + 9);
	*(f + 9)=*max^*(f + 9);
	*max=*max^*(f + 9);
}

void Out(int *a)
{
    int i;
    for(i = 0; i < 10; i++)
    {
        printf("%d ", *a);
        a++;
    }
}