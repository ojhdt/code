//if() {A}
#include <stdio.h>
int main(void)
{
    int a, b, max;
    printf("Input a, b:");
    scanf("%d, %d", &a, &b);
    max = a > b ? a : b;//A ? B : C
    printf("max = %d\n", max);
    return 0;
}