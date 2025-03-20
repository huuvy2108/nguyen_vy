#include <stdio.h>

// Chức năng: Viết hoa chữ cái đầu mỗi từ trong chuỗi
// input: Địa chỉ phần tử đầu tiên của chuỗi
// Kết quả trả về: Chữ cái đầu mỗi từ trong chuỗi được viết hoa
void chuan_hoa_chuoi(char* str) {
    int viethoa = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t') {
            if (viethoa == 1 && str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - ('a' - 'A');
            }
            viethoa = 0;
        }
        else {
            viethoa = 1;
        }
    }
}

void main() {
    char str_1[100];

    printf("Nhap chuoi: ");
    gets_s(str_1, sizeof(str_1));

    chuan_hoa_chuoi(str_1);
    printf("Chuoi sau khi chuan hoa: %s\n", str_1);
}
