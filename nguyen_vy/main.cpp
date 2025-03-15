#include <stdio.h>

void main()
{
    int SLN = 0;
    int arr_1[] = { 1,2,-2,4,-4,3,1,3 };
    int size = sizeof(arr_1) / sizeof(arr_1[0]);
    printf("Cac so le trong mang: ");
    for (int i = 0; i < size; i++)
    {
        if (arr_1[i] % 2 != 0) {
            printf("%d ", arr_1[i]);
        }
    }
    printf("\n");
}  