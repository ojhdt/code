//垃圾题，不做
#include <stdio.h>
int main(void)
{
    return 0;
}

int Time(int k)
{
    //计算总时间
    int t;
    t = Plus(t - 1);
    return t;
}

int Plus(int n)
{
    //计算1+2+3+..+n
    int i, r = 0;
    for(i = 1; i <= n; i++)
    {
        r = r + i;
    }
    return r;
}