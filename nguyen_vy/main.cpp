#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
	int SLN = 0;
	int arr_1[] = {1,2,2,4,4,3,1,3};
	int size = sizeof(arr_1) / sizeof(arr_1[0]);
	for (int i = 0; i < size; i++)
	{
		if (arr_1[i] > SLN)
			{
			SLN = arr_1[i];
			}
	}
	for (int i = 0; i < size; i++)
	{
		if (arr_1[i] == SLN)
		{
			printf("Vi tri So lon nhat la: %d\n", i);
		}
	}
}  