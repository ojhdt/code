#include<stdio.h>
int main(void)
{
    int i;
    int input;
    double a=0, b=0, c=0, d=0, e=0, f=0;
    for(i = 0; i < 6000; i++)
    {
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            a++;
            break; 
        
        case 2:
            b++;
            break;
        
        case 3:
            c++;
            break;

        case 4:
            d++;
            break;

        case 5:
            e++;
            break;

        case 6:
            f++;
            break;

        default:
            break;
        }
    }
    printf("%lf %lf %lf %lf %lf %lf", a/6000, b/6000, c/6000, d/6000, e/6000, f/6000);
    return 0;
}