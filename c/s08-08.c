#include <stdio.h>
int main(void)
{
    int feedback[40];
    int i, j, n = 1, ln = 0, z;
    int temp;
    double sum;

    for(i = 0; i < 40; i++)
    {
        scanf("%d", &feedback[i]);
    }

    for(i = 0; i < 39; i++)
    {
        for(j = i + 1;j < 40; j++)
        {
            if(feedback[i] > feedback[j])
            {
                temp = feedback[i];
                feedback[i] = feedback[j];
                feedback[j] = temp;
            }
        }
    }

    // for(i = 0; i < 40; i++)
    // {
    //     printf("%d\n", feedback[i]);
    // }

    for(i = 0; i <= 39; i++)
    {
        if(feedback[i] == feedback[i+1])
        {
            n++;
        }
        else
        {
            if(n > ln)
            {
                ln = n;
                z = feedback[i];
            }
            n = 1;
        }
        //printf("n=%d ln=%d\n", n, ln);
    }

    for(i = 0; i < 40; i++)
    {
        sum += feedback[i];
        //printf("sum=%lf\n", sum);
    }
    sum = sum/40;
    double zw = (feedback[19]+feedback[20])/2;

    printf("%lf %lf %d", sum, zw, z);
    
    return 0;
}