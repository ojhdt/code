#include <stdio.h>
int main(void)
{
    char n[11];
    int i;
    for(i = 0; i < 10; i++)
    {
        scanf("%c", &n[i]);
        printf("%d\n", i);
    }
    
    for(i = 0; n[i] != '\0'; i++)
    {
        printf("%c\n", n[i]);
    }
}