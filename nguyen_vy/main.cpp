#include <stdio.h>

void main()
{
	int a, b,c = 0;
	printf("Nhap so a:\n");
	scanf_s("%d", &a);
	printf("Nhap so b:\n");
	scanf_s("%d", &b);
	printf("Nhap so c:\n");
	scanf_s("%d", &c);
	int max = a;
	if (b >= max)
	{
		max = a;
	}
	if (c >= max)
	{
		max = c;
	}
		printf("So lon nhat la: %d\n",max);
}