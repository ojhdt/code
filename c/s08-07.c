#include <stdio.h>
int main(void)
{
    int in[40];
    int i;
    int count[11]={0,0,0,0,0,0,0,0,0,0,0};
    for(i = 0; i < 40; i++)
    {
        scanf("%d", &in[i]);
        switch (in[i])
        {
        case 1:
            count[1]++;
            break;
        
        case 2:
            count[2]++;
            break;

        case 3:
            count[3]++;
            break;

        case 4:
            count[4]++;
            break;

        case 5:
            count[5]++;
            break;

        case 6:
            count[6]++;
            break;

        case 7:
            count[7]++;
            break;

        case 8:
            count[8]++;
            break;

        case 9:
            count[9]++;
            break;

        case 10:
            count[10]++;
            break;

        default:
            break;
        }
    }
    printf("Grade Count Histogram\n");
    for(i = 1; i <= 10; i++)
    {
        printf("%-10d%-5d", i, count[i]);
        int j;
        for(j = 0; j < count[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}