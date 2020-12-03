#include <stdio.h>
void Sort(int *a, int *b, int *c);
int main(void)
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    Sort(&x, &y, &z);
    printf("%d %d %d", x, y, z);
    return 0;
}
/*
一种不需要临时变量就可以交换ab的方法
*a=*a^*b;
*b=*b^(*a^*b)=*b^*b^*a=0^*a=*a;将*a的值赋bai给了*b；
*a=（*a^*b)^*a=*a^*a^*b=0^*b=*b;将*b的值赋给*a；
*/
void Sort(int *a, int *b, int *c)
{
	if (*a > *b)
	{
	    *a=*a^*b;
	    *b=*a^*b;
	    *a=*a^*b;
	}
	if (*a > *c)
	{
	    *a=*a^*c;
	    *c=*a^*c;
	    *a=*a^*c;
	}
	if (*b > *c)
	{
	    *c=*b^*c;
	    *b=*b^*c;
	    *c=*b^*c;
	}
}