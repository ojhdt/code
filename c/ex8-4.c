#include <stdio.h>
#define N 40
int ReadScore(int score[]);
void DataSort(int score[], int n);//没有return
void PrintScore(int score[], int n);//没有return
int main(void)
{
    int score[N], n;
    n = ReadScore(score);
    printf("Total students are %d\n", n);
    DataSort(score, n);
    printf("Sorted scores:");
    PrintScore(score, n);//使用时仅需写数组名
}

int ReadScore(int score[])//形参接受时不用定义大小
{
    int i =-1;
    do{
        i++;
        printf("Input score:");
        scanf("%d", &score[i]);
    }while(score[i] > 0);//输入负数继续执行
    return i;
}

void DataSort(int score[], int n)//排序并输出
{
    /*
    n=5
    i=0,j=1,(1>0)
    i=0,j=2
    i=0,j=3
    i=0,j=4
    i=1,j=2
    ...
    i=3,j=4
    [5]放最后
    */
    int i, j, temp;
    for(i = 0; i < n -1; i++)
    {
        for(j = i + 1;j < n; j++)
        {
            if(score[j] > score[i])//交换位置
            {
                temp = score[j];
                score[j] = score[i];
                score[i] = temp;
            }
        }
    }
}

void PrintScore(int score[], int n)
{
    int i;
    for(i = 0;i < n;i++)
    {
        printf("%4d", score[i]);
    }
    printf("\n");
}