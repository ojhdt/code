#include<stdio.h>
#include<string.h>
#define MAX_LEN 10
#define N 150
void SortString(char str[][MAX_LEN], int n);
int main(void)
{
    int i, n;
    char name[N][MAX_LEN];//每一个位置只能放一个字符
    printf("How many countries?");
    scanf("%d", &n);
    getchar();
    printf("Input their names:\n");
    for(i = 1; i < n; i++)
    {
        gets(name[i]);
    }
    SortString(name, n);
    printf("Sorted results:\n");
    for ( i = 0; i < n; i++)
    {
        puts(name[i]);
    }
    return 0;
}

void SortString(char str[][MAX_LEN], int n)
{
    int i, j;
    char temp[MAX_LEN];
    for ( i = 0; i < n - 1; i++)
    {
        for ( j = i + 1; j < n; j++)
        {
            if(strcmp(str[j], str[i]) < 0)//比较字符串大小。（同一位置上每一个字符，从左到右比较ASCLL码）
            {
                strcpy(temp, str[i]);//strcpy用于字符串赋值，相当于temp = str[i]
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
}