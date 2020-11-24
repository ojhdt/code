#include<stdio.h>
int main(void)
{
    int sum, r = 0;
    scanf("%d", &sum);
    for(;;r++)
    {
        int a = r / 100 % 10;
        int b = r / 10 % 10;
        int c = r / 1 % 10;
        int t = 2*(a+b+c);
        if((sum + r) % 111 == 0 && (sum + r) / 111 == t)
        {
            printf("%d", r);
            break;
        }
    }
    /*while((sum + r) % 111 != 0 && )
    {
        r++;
    }*/
    return 0;
}