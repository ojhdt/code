#include <stdio.h>
int main(void)
{
    int w, s, x, y;
    scanf("%d %d", &w, &s);
    scanf("%d %d", &x, &y);
    int i, j, k;
    int data[w][x];
    int cut[s][x];
    for(i = 0; i < w; i++)
    {
        for(j = 0; j < x; j++)
        {
            scanf("%d", &data[i][j]);
        }
    }
    

    for (i = 0; i < s; i++)
    {
        for(j = 0; j < x; j++)
        {
            scanf("%d", &cut[i][j]);
        }
    }

    for (i = 0; i < w; i++)
    {
        for(j = 0; j < x; j++)
        {
            for(k = 0; k < s; k++)
            {
                if (data[i][j] >= cut[k][j])
                {
                    data[i][j] -= cut[k][j];
                }
                else
                {
                    data[i][j] = y - cut[k][j];
                }   
            }
        }
    }

    
    for(i = 0; i < w; i++)
    {
        for(j = 0; j < x; j++)
        {
            printf("%d ", data[i][j]);
        }
        printf("\n");
    }

    return 0;
}
