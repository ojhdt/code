#include<stdio.h>
int main()
{
	int a, b, c, n, i = 0;
	while(scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		for(n = 10; n <= 100; n++)
		{
			if(n % 3 == a && n % 5 == b && n % 7 == c)
			{
                i++;
				printf("Case %d: %d\n", i, n);
				break;
			}
		}
		if(n > 100)
		{
            i++;
			printf("Case %d: No answer\n",i);
		}
	}
	return 0;
} 