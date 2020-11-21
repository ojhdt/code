#include <stdio.h>
int main(void)
{
    int i, j, k, t, n, input, result;
    int data[10];
    int candy[10] = {0,0,0,0,0,0,0,0,0,0};
    scanf("%d", &t);
    for(i = 0; i < t; i++)
    {
        scanf("%d", &n);
        for(j = 0; j < n; j++)
        {
            scanf("%d", &input);
            int chu = 1;
            for(k = 0;k < 10; k++)
            {
                if((float)input / chu < 0.1) data[k] = 10;
                else data[k] = input / chu % 10;
                chu = chu * 10;
            }

            for(k = 0; k < 10; k++)
            {
                printf("data[%d] = %d,");
                switch(data[k])
                {
                    case 0:
                        candy[0]++;
                        break;
                    case 1:
                        candy[1]++;
                        break;
                    case 2:
                        candy[2]++;
                        break;
                    case 3:
                        candy[3]++;
                        break;
                    case 4:
                        candy[4]++;
                        break;
                    case 5:
                        candy[5]++;
                        break;
                    case 6:
                        candy[6]++;
                        break;
                    case 7:
                        candy[7]++;
                        break;
                    case 8:
                        candy[8]++;
                        break;
                    case 9:
                        candy[9]++;
                        break;
                    default:
                        break;
                }
            }
        }
        //text
        /*for(j = 0; j < 10; j++)
        {
            printf("candy[%d] = %d\n", j, data[j]);
        }*/
        int max = candy[0];
        for(j = 1; j < 10; j++)
        {
            if(candy[j] > max) max = candy[j];
        }
        for(j = 0; j < 10; j++)
        {
            int a = max - candy[j];
            result = result + a;
        }
        printf("%d\n", result);
    }
    return 0;
}