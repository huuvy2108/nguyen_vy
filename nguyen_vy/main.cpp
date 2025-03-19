#include <stdio.h>

//Chuc nang: in số lẻ trong mảng
//input: Mang, so phan tu cua mang
//ket qua: không có
void inSoLe(int arr[], int size) {
    printf("Cac so le trong mang: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void main() {
    int arr_1[] = { 1, 2, -2, 4, -4, 3, 1, 3 };
    int size = sizeof(arr_1) / sizeof(arr_1[0]);

    inSoLe(arr_1, size);
}
