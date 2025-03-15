#include <stdio.h>

void main()
{
    int arr_1[] = { 5, 2, 9, 1, 7, 6, 8, 3, 4, 0 };
    int size = sizeof(arr_1) / sizeof(arr_1[0]);

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr_1[j] > arr_1[j + 1]) {
                int temp = arr_1[j];
                arr_1[j] = arr_1[j + 1];
                arr_1[j + 1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep tang dan: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr_1[i]);
    }
    printf("\n");
}