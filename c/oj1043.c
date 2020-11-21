#include <stdio.h>
int Path();
int main(void)
{
    int t, i, n;
    scanf("%d", &t);
    for(i = 1; i <= t; i++)
    {
        n = Path();
        if(n == -1)
        {
            printf("Single dog!\n");
        }
        else
        {
            printf("%d\n", n);
        }
    }
    return 0;
}

int Path()
{
    int m, n;
    int x1, y1;
    int x2, y2;

    scanf("%d %d", &m, &n);
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    if(x2 < x1 || y2 < y1)
    {
        return -1;
    }
    else
    {
        return (x2 + y2 - x1 - y1);
    }
}