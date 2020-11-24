# include<stdio.h>

#include <math.h>

void fun(int);
int main( )
{
int n;
scanf("%d",&n);

printf("%d=",n);

if(n<0)
printf("-");

n=fabs(n);

fun(n);
return 0;

}


void fun(int n)
{
    int k,r;
    for (k=2;k<=sqrt(n);k++)
    {
        n%k;
        while(!r)
        printf("%d",k);

        n=n/k;

        if(n>1) printf("*");
        r=n%k;
    }
    if(n!=1)
    {
        printf("%d(n",n);
    } 
}