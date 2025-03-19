#include <stdio.h>

// Chức năng: Hoán vị 2 số nguyên
// input:số nguyên a, b
// Kết quả trả về: sau khi hoán vị, a = b, b = a
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Chức năng: Hàm sắp xếp
void sapxep(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);  // Gọi hàm hoán vị
            }
        }
    }
}

// Chức năng: Hàm in mảng
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr_1[] = { 5, 2, 9, 1, 7, 6, 8, 3, 4, 0 };
    int size = sizeof(arr_1) / sizeof(arr_1[0]);

    printf("Mang ban dau: ");
    printArray(arr_1, size);
    sapxep(arr_1, size);
    printf("Mang sau khi sap xep tang dan: ");
    printArray(arr_1, size);

}
