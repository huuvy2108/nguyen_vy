#include <stdio.h>

void main()
{
    int SLN = 0;
    int arr_1[] = { 1,2,3,4,5,6,7,8,9 };
    int size = sizeof(arr_1) / sizeof(arr_1[0]);
    printf("Cac so nguyen to trong mang: ");
    for (int i = 0; i < size; i++)
    {
		int num = arr_1[i];
		int SNT = 1;
		if (num < 2)
		{
			SNT = 0;
		}
		else
		{
			for (int j = 2; j <= num / 2; j++)
			{
				if (num % j == 0)
				{
					SNT = 0;
				}
			}
		}
		if (SNT) {
			printf("%d\n ", num);
		}
    }
}  