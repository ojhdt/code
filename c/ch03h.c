#include <stdio.h>
int main(void)
{
    int a, z, x;
    scanf("%d", &a);
    
    /*for(x = 0; x <= (int)(a/4);x++)
    {
        z = (a/2)-x;
        
    }*/
    if(a % 2 != 0)
    {
        printf("0 0");
    }
    else
    {
        while(x < (a/4))
        {
            x++;
        }
        z = (a/2)-x;
        printf("%d %d", z, a/2);
    }
    return 0;
}