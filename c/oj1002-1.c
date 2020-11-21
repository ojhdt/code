#include <stdio.h>
int Judge(int n);
void Print();
int main()
{
    int t, temp, i;
    scanf("%d", &t);
    for(i = 0; i < t; i++)
    {
        scanf("%d", &temp);
        Print(Judge(temp));
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