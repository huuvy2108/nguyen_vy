#include <stdio.h>

//Chức năng: Tim số lớn nhất trong mảng
//input:mảng, số phần tử trong mảng 
//Kết quả trả về: Giá trị lớn nhất trong mảng
int timSoLonNhat(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void main() {
    int arr_1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int size = sizeof(arr_1) / sizeof(arr_1[0]);

    int max = timSoLonNhat(arr_1, size);

    printf("So lon nhat trong mang: %d\n", max);
}
