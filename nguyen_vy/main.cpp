#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
	int sum = 0;
	int arr_1[9] = {};
	for (int i = 0; i < 10; i++)
	{
		printf("Nhap phan tu thu %d: ", i + 1);
		scanf_s("%d", &arr_1[i]);
		sum = sum + arr_1[i];
	}
	printf("Tong cac phan tu trong mang la: %d", sum);
}  