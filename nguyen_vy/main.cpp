#include <stdio.h>

void main()
{
	float a = 0;
	printf("Nhap diem:\n");
	scanf_s("%f", &a);
	if (a >= 8)
	{
		printf("Gioi\n");
	}
	else if (a >= 6.5)
		{
		printf("Kha\n");
		}
		else if (a >= 5)
			{
		printf("TB\n");
			}
		else
		{
			printf("Yeu\n");
		}
}