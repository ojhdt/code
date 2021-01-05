#include<stdio.h>
void PrintYH(int a[][7], int n);
int main(void)
{
    int n = 7, i, j;
    int a[7][7] = {};
    for(i = 0; i < n; i++)
    {
        a[i][0] = 1;
        a[i][i] = 1;
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j <= i; j++)
        {
            if(a[i][j] != 1)
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }

    PrintYH(a, n);

    return 0;
}

/*  函数功能： 输出杨辉三角形前n行元素的值 */
void PrintYH(int a[][7], int n)
{
int  i, j;
for (i=0; i<n; i++)
{
	for (j=0; j<=i; j++)
    {
		printf("%4d", a[i][j]);
    }
    printf("\n");
}
}