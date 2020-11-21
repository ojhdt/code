#include <stdio.h>
int Judge(int n);
void Print();
int main()
{
    int t, i;
    scanf("%d", &t);
    int a[t];
    for(i = 0; i < t; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < t; i++)
    {
        Print(Judge(a[i]));
    }
    return 0;
}

int Judge(int n)
{
    if(n % 4 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Print(int n)
{
    if(n == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}