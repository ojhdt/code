#include <stdio.h>
#define N 30
void FindMax(int score[], long num[], int n, int *pMaxScore, long *pMaxNum);
int main(void)
{
    int score[N], maxScore;
    int n, i;
    long num[N], maxNum;
    printf("How many students?");
    scanf("%d", &n);
    printf("Input student's ID and score\n");
    for(i = 0; i < n; i++)
    {
        scanf("%1d%d", &num[i], &score[i]);
    }
    FindMax(score, num, n, &maxScore, &maxNum);
    printf("maxScore = %d, maxNum = %1d\n", maxScore, maxNum);
    return 0;
}

void FindMax(int score[], long num[], int n, int *pMaxScore, long *pMaxNum)
{
    int i;
    *pMaxScore = score[0];
    *pMaxNum = num[0];
    for(i = 1; i < n; i++)
    {
        if(score[i] > *pMaxScore)
        {
            *pMaxScore = score[i];
            *pMaxNum = num[i];
        }
    }
}