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
    int i, j, k, temp;
    /*
    n=5
    i=0:k=1,j=1,j=2(2-1)(3-1)(4-1)score[k]最大
    i=1:
    */
    for(i = 0; i < n -1; i++)//计数排序次数
    {
        k = 1;
        for(j = i + 1; j < n; j++)
        {
            if(score[j] > score[k])
            {
                k = j;//把k的值换成更大的score[j]的对应值j
            }
        }
    }
    if(k != i)//如果最大值和当前值不相等，交换
    {
        temp = score[k];
        score[k] = score[i];
        score[i] = temp;
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