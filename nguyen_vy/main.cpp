#include <stdio.h>

void main()
{
	int i = 0,j = 0;
	for (i = 2; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			printf("%d x %d = %2d\t", i, j, i * j);
		}
		printf("\n");
	}
	
}