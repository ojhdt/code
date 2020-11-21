#include <stdio.h>
int Plus(int n);
int Read(int input[]);
void Print(int input[], int m);
int main(void)
{
    int input[1], m;//无意义
    m = Read(input);
    Print(input, m);
    return 0;
}

int Plus(int n)
{
    int i, result = 0;
    for(i = 1; i <= n; i++)
    {
        result = result + i;
    }
    return result;
}

int Read(int input[])
{
    int i = -1;
    do
    {
        i = i + 1;
        scanf("%d", &input[i]);
        if(input[i] > 0)
        {
            printf("input[%d] = %d\n", i, input[i]);
        }
    } while (input[i] > 0);
    return i - 1;
}

void Print(int input[], int m)
{
    int i = -1;
    do
    {
        i = i + 1;
        printf("input[%d] = %d\n", i, input[i]);
    } while (i <= m);
}