//数组名代表数组的首地址，即 list = &list[0]

#include <stdio.h>
#define N 12
int main(void)
{
    char name[N];
    scanf("%s", name);
    printf("%s", name);
    for(int i = 0;i < N; i++)
    {
        printf("name[%d] = %c\n", i, name[i]);
    }
    return 0;
}