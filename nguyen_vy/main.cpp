#include <stdio.h>

void main()
{
	int a,b = 0;
	printf("Nhap a,b:\n");
	scanf_s("%d%d", &a, &b);
	if (a = b)
	{
		printf("a = b\n");
	}
	else if (a > b)
	{
		printf("a > b\n");
	}
	else
		{
		printf("a < b\n");
	}
}