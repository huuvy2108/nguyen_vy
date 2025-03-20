#include <stdio.h>

// Chức năng: Tìm chuỗi substr trong chuỗi str
// input: Địa chỉ phần tử đầu tiên của chuỗi, địa chỉ phần tử đầu tiên của chuỗi con cần tìm
// Kết quả trả về: Địa chỉ đầu tiên của chuỗi con trong chuỗi, nếu không tìm thấy trả về NULL
char* tim_chuoi_con(char* str, char* subStr) {
    int i, j;

    for (i = 0; str[i] != '\0'; i++) {
        j = 0;
        while (subStr[j] != '\0' && str[i + j] == subStr[j]) {
            j++;
        }
        if (subStr[j] == '\0') {
            return (char*)&str[i];
        }
    }
    return NULL;
}

void main() {
    char str_1[100], subStr[50];
    char* ketqua;

    printf("Nhap chuoi chinh: ");
    gets_s(str_1, sizeof(str_1));

    printf("Nhap chuoi can tim: ");
    gets_s(subStr, sizeof(subStr));

    ketqua = tim_chuoi_con(str_1, subStr);

    if (ketqua != NULL) {
        printf("Chuoi \"%s\" duoc tim thay tai dia chi: %p\n", subStr, ketqua);
    }
    else {
        printf("Chuoi \"%s\" khong co trong chuoi.\n", subStr);
    }
}
