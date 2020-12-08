#include <stdio.h>
#include <math.h>
#define N 999
int strcmp(char a[], char b[]);
int main(void)
{
    char a[N], b[N];
    printf("%d", sstrcmp(a, b));
    return 0;
}

int sstrcmp(char a[], char b[])
{
    int i, anum = 0, bnum = 0;
    gets(a);
    gets(b);
    for(i = 0; a[i] != '\0'; i++)
    {
        anum += a[i];
    }
    for(i = 0; b[i] != '\0'; i++)
    {
        bnum += b[i];
    }
    if(anum < bnum) printf("-");
    return(fabs(anum - bnum));
}