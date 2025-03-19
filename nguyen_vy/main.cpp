#include <stdio.h>

//Chuc nang: tinh tb
//input: Mang, so phan tu cua mang
//ket qua: tong
float tinhTrungBinhLe(int arr[], int size) {
    int sum = 0, count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
            count++;
        }
    }

	return (count > 0) ? (float)sum / count : -1;
}
void main()
{
    int arr_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int size = sizeof(arr_1) / sizeof(arr_1[0]);

    float average = tinhTrungBinhLe(arr_1, size);

    if (average != -1) {
        printf("Trung binh cong cac so LE trong mang: %.2f\n", average);
    }
    else {
        printf("Khong co so le trong mang.\n");
    }
}
