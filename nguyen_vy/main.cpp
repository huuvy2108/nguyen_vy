#include <stdio.h>

//Chuc nang: tinh tong
//input: Mang, so phan tu cua mang
//ket qua: tong
int tinhTong(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
void main()
{
    int arr_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int size = sizeof(arr_1) / sizeof(arr_1[0]);
    int sum = tinhTong(arr_1, size);

    printf("Tong cac phan tu trong mang: %d\n", sum);
}
