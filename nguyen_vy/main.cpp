#include <stdio.h>

// Chức năng: Đếm số ký tự space trong chuỗi
// input: Địa chỉ phần tử đầu tiên của chuỗi
// Kết quả trả về: Sô ký tự space trong chuỗi
int dem_space(char* str) {
    int dem = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            dem++;
        }
    }
    return dem;
}

void main() {
    char str_1[100];

    printf("Nhap chuoi: ");
    gets_s(str_1, sizeof(str_1));

    int so_ky_tu_space = dem_space(str_1);
    printf("So ky tu space trong chuoi la: %d\n", so_ky_tu_space);
}
