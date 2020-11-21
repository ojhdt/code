#include <stdio.h>
int main(void)
{
    int n, m, i, a=0, b=0;//n<m
    int sq=0, tr=0;
    scanf("%d %d", &n, &m);
    if(n > m)
    {
        int temp = n;
        n = m;
        m = temp;
    }
    //printf("n=%d,m=%d,tol=%d\n", n, m, tol);
    int k =(n > m ? m : n);//取小
    for(i = 0;i < n; i++)
    {
        sq = sq +((n-i)*(m-i));
    }

    for(i = 1;i <= n;i++)
    {
        a = a + i;
    }
    for(i = 1;i <= m;i++)
    {
        b = b + i;
    }
    int tol = a * m + b * n;
    tr = tol - sq;
    printf("%d %d", sq, tr);
    return 0;
}