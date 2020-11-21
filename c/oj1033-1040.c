/*#include <stdio.h>
int main(void)
{
    int i, n, a, b;
    scanf("%d", &n);
    for(i = 1;i <= n;i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}*/

/*#include <stdio.h>
int main(void)
{
    int a, b;
    while(a != 0 || b != 0)
    {
        scanf("%d %d", &a, &b);
        if(a != 0 && b != 0)
        {
            printf("%d\n", a + b);
        }
    }
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int n, i, temp, r;   
    while(1)
    {
        r = 0;
        scanf("%d", &n);
        if(n == 0) break;
        for(i = 1;i <= n;i++)
        {
            scanf("%d", &temp);
            r = r + temp;
        }
        printf("%d\n", r);
    }
    return 0;
}*/

/*#include <stdio.h>
int main(void)
{
    int i, n, m, j, k, r;
    scanf("%d", &n);
    for(i = 1,r = 0; i <= n; i++)
    {
        scanf("%d", &m);
        for(j = 1; j <= m;j++)
        {
            scanf(" %d", &k);
            r = r + k;
        }
        printf("%d\n", r);
        r = 0;
    }
    return 0;
}*/

//wrong
/*#include <stdio.h>
int main(void)
{
    int i, j, k, r;
    scanf("%d ", &j);
    for(i = 1, r = 0; i <= j; i++)
    {
        scanf("%d", &k);
        r = r + k;
    }
    printf("%d\n", r);
}*/

/*#include <stdio.h>
int Plus(int a, int b);
int main(void)
{
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF)
    {
        printf("%d\n\n", Plus(a, b));
    }
    return 0;
}

int Plus(int a, int b)
{
    int r;
    r = a + b;
    return r;
}*/

#include<stdio.h>
int main(void)
{
    int n, l, i, temp, r;
    scanf("%d", &n);
    while(scanf("%d", &l) != EOF)
    {
        for(i = 1, r = 0; i <= l; i++)
        {
            scanf("%d", &temp);
            r = r + temp;
        }
        printf("%d\n\n", r);
    }
    return 0;
}