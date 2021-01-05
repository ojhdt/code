#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void Output(int n,int a[50]);
int main(void)
{
    int a[50], b[2];
    int i, j, k, l, n;
    scanf("%d", &n);

    //求i!
    for(i = 1; i <= n; i++)
    {
        //计算新一次阶乘前，将结果重置为1
        for(j = 0; j < 50; j++)
        {
            a[j] = 0;
        }
        a[0] = 1;

        //从1一直乘到i
        for(j = 1; j <= i; j++)
        {
            //将当前要乘的数（j, 必为两位数）各位分离
            b[0] = 0;
            b[1] = 0;
            for(k = 0;k < 2;k++)
            {
                b[k] = (int)(j / pow(10,k)) % 10;
            }
            int g[50] = {0}, s[50] = {0}, gjin[50] = {0}, sjin[50] = {0};//存储个位相乘后个位数，十位相乘后个位数，个位相乘后进位数，十位相乘后进位数
            for(l = 0; l < 50; l++)
            {
                g[l] = a[l] * b[0] % 10;
                s[l] = a[l] * b[1] % 10;
                gjin[l] = (int)(a[l] * b[0] / 10) % 10;
                sjin[l] = (int)(a[l] * b[1] / 10) % 10;
            }

            //各位相加得结果
            int hjin[50] = {0};
            a[0] = g[0];
            a[1] = (gjin[0] + g[1] + s[0]) % 10;
            hjin[1] = (int)((gjin[0] + g[1] + s[0]) / 10) % 10;
            for(l = 2; l < 50; l++)
            {
                a[l] = (gjin[l - 1] + g[l] + s[l - 1] + sjin[l - 2] + hjin[l - 1]) % 10;
                hjin[l] = (int)((gjin[l - 1] + g[l] + s[l - 1] + sjin[l - 2] + hjin[l - 1]) / 10) % 10;
            }
        }

        Output(i, a);




        // for(k = 0;k < 50;k++)
        // {
        //     b[k] = (int)(i / pow(10,k)) % 10;
        // }
    }
    return 0;
}

void Output(int n,int a[50])
{
    int i;
    printf("%d! = ", n);
    int is_s = 0;
    for(i = 49; i >=0; i--)
    {
        if(a[i]!=0)
        {
            is_s = 1;
        }
        if(is_s != 0)
        {
            printf("%d", a[i]);
        }
    }
    printf("\n");
}