#include <stdio.h>

void main()
{
    int SLN = 0;
    int arr_1[] = { 1,2,-2,4,-4,3,1,3 };
    int size = sizeof(arr_1) / sizeof(arr_1[0]);
    for (int i = 0; i < size; i++)
    {
        if (arr_1[i] < 0) {
            arr_1[i] = 0;
        }
    }
    printf("Mang sau khi thay the so am bang 0:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr_1[i]);
    }
}  