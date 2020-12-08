#include <stdio.h>
#define N 50

int ReadScore(int score[], long num[]);
int FindMax(int score[], int n);
int main(void)
{
    int score[N], maxNum, n;
    long num[N];
    n = ReadScore(score, num);      /* 输入成绩，返回学生人数 */
    printf("Total students are %d\n", n);
    maxNum = FindMax(score, n);        /* 计算并返回最高分所在数组的下标 */
    printf("The highest is %ld, score is %d\n", num[maxNum], score[maxNum]);
return 0;
}

int ReadScore(int score[], long num[])
{
    int i;
    for(i = 0;;i++)
    {
        scanf("%d %ld", &num[i], &score[i]);
        if(num[i] < 0 || score[i] < 0) break;
    }
    return i;
}

int FindMax(int score[], int n)
{
    int i, a = 0;
    int scoremax = score[0];
    for(i = 0; i < n; i++)
    {
        if(score[i] > scoremax)
        {
            scoremax = score[i];
            a = i;
        }
    }
    return a;
}