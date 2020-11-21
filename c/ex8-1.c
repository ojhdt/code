#include <stdio.h>
int main(void)
{
    int score[5];//5个元素，调用为0，1，2，3，4
    int totalScore;
    int i;
    printf("Input the score of the students:\n");
    for(i = 0; i < 5;i++)
    {
        scanf("%d", &score[i]);
        totalScore = totalScore + score[i];
    }
    printf("The average score is %f\n", totalScore / 5.0);
    return 0;
}