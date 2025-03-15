#include <stdio.h>

void main()
{
    int SLN = 0;
    int arr_1[] = { 1,2,3,4,5,6,7,8,9 };
    int size = sizeof(arr_1) / sizeof(arr_1[0]);
	int max = arr_1[0];
    for (int i = 0; i < size; i++)
    {
        if (arr_1[i] > max) {
            max = arr_1[i];
		}
    }
    printf("so lon nhat trong mang: %d\n",max);
}  