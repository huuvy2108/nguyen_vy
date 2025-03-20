#include <stdio.h>

// Chức năng: Tìm ký tự c trong chuỗi
// input: Địa chỉ phần tử đầu tiên của chuỗi, ký tự cần tìm
// Kết quả trả về: Địa chỉ của ký tự cần tìm thấy trong chuỗi
char* tim_ky_tu(const char* str, char c) {
    while (*str != '\0') {
        if (*str == c) {
            return (char*)str;
        }
        str++;
    }
    return NULL;
}

int main() {
    char str_1[100];
    char c;
    char* diachi;

    printf("Nhap chuoi: ");
    gets_s(str_1, sizeof(str_1));

    printf("Nhap ky tu can tim: ");
    scanf_s(" %c", &c, 1);

    diachi = tim_ky_tu(str_1, c);

    if (diachi != NULL) {
        printf("Ky tu '%c' duoc tim thay tai dia chi: %p\n", c, diachi);
    }
    else {
        printf("Ky tu '%c' khong co trong chuoi.\n", c);
    }
}
