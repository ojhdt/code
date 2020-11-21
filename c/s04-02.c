#include <stdio.h>
int main(void)
{
    char f;
    f = getchar();
    printf("%c %d", f-32, f-32);
    return 0;
}