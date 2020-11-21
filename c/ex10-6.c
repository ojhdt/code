#include<stdio.h>
#define N 80
void MyStrcpy(char dstStr[], char srcStr[]);
int main(void)
{
    char a[N], b[N];
    printf("Input a string:");
    gets(a);
    MyStrcpy(b, a);
    printf("The copy is:");
    puts(b);
    return 0;
}

void MyStrcpy(char dstStr[], char srcStr[])
{
    int i = 0;
    while (srcStr[i] != '\0')
    {
        dstStr[i] = srcStr[i];
        i++;
    }
    dstStr[i] = '\0';
}