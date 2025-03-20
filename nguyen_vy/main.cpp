#include <stdio.h>

// Chức năng: Chuyển chữ thường thành chữ hoa
// input: Địa chỉ phần tử đầu tiên của chuỗi
// Kết quả trả về: Chữ hoa của chuỗi
void chuyen_hoa(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
    }
}

void main() {
    char str_1[100];

    printf("Nhap chuoi: ");
    gets_s(str_1, sizeof(str_1));

    chuyen_hoa(str_1);
    printf("Chuoi sau khi chuyen thanh in hoa: %s\n", str_1);
}
