#include <stdio.h>

// Chức năng: Đếm số ký tự trong chuỗi
// input: Địa chỉ phần tử đầu tiên của chuỗi
// Kết quả trả về: Sô ký tự trong chuỗi
int dem_ky_tu(char* str) {
    int dem = 0;
    while (str[dem] != '\0') {
        dem++;
    }
    return dem;
}

void main() {
    char str_1[100];

    printf("Nhap chuoi: ");
    gets_s(str_1, sizeof(str_1)); // Hoặc thay bằng fgets(str_1, sizeof(str_1), stdin);

    printf("So ky tu trong chuoi la: %d\n", dem_ky_tu(str_1));
}