#include <stdio.h>

//Chức năng: Xác định SNT
//input:Giá trị cần kiểm tra
//Kết quả trả về: Là SNT: 1, Không là SNT: 0
int laSoNguyenTo(int num) {
    if (num < 2) {
        return 0;
    }
    for (int j = 2; j * j <= num; j++) {
        if (num % j == 0) {
            return 0;
        }
    }
    return 1;
}

// Chức năng: Hàm in các số nguyên tố trong mảng
void inSoNguyenTo(int arr[], int size) {
    printf("Cac so nguyen to trong mang: ");
    for (int i = 0; i < size; i++) {
        if (laSoNguyenTo(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr_1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int size = sizeof(arr_1) / sizeof(arr_1[0]);

    inSoNguyenTo(arr_1, size);
}
