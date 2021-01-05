#include <stdio.h>
int main(void)
{
    int i, j;
    int sum, maxn, max = 0;
    typedef struct student
    {
        int num;
        char name[10];
        int score[3];
    }Stu;
    Stu s[10];
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &s[i].num);
        scanf("%s", &s[i].name);
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &s[i].score[j]);
        }
    }

    for(i = 0; i < 3; i++)
    {
        sum = 0;
        for(j = 0; j < 10; j++)
        {
            sum += s[j].score[i];
        }
        printf("%.2lf ", (double)sum/10);
    }
    printf("\n");
    
    for(i = 0; i < 10; i++)
    {
        if(max < (s[i].score[0] + s[i].score[1] + s[i].score[2]))
        {
            max = (s[i].score[0] + s[i].score[1] + s[i].score[2]);
            maxn = i;
        }
    }
    printf("%d %s %.2lf %.2lf %.2lf %.2lf", s[maxn].num, s[maxn].name, (double)s[maxn].score[0], (double)s[maxn].score[1], (double)s[maxn].score[2], (double)(s[maxn].score[0] + s[maxn].score[1] + s[maxn].score[2]));
    return 0;
}