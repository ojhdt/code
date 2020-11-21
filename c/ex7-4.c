#include <stdio.h>
long Fact(int n);
int main(void)
{
    int n;
    long result;
    printf("Input n:");
    scanf("%d", &n);
    result = Fact(n);
    if(result == -1)
    {
        printf("ERROR");
    } 
    else
    {
        printf("%d! = %ld\n", n, result);
    }
    return 0;
}

long Fact(int n)
{
    if(n < 0)
    {
        return -1;
    }
    else if(n == 0 || n == 1)
    {
        return 1;///基线情况，防止无限递归
    }
    else
    {
        return (Fact(n-1) * n);///NB    //Fact(5)=5*Fact(4)=5*4*Fact(3)=5*4*3*2*Fact(1)=5*4*3*2*1
    }
}